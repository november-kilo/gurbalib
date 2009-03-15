/*
 * Gurbalib error_d
 *
 * By Aidil.
 *
 */
#include <tlsvar.h>

static void create() {
  DRIVER->register_error_d();
}

/*
 * NAME:        format_runtime_error()
 * DESCRIPTION: format a runtime error
 */
string format_runtime_error( string error, mixed **trace, int caught, int ticks ) {
  string result;
  string progname, objname, function, str;
  int i, sz, line, len;
  object player;

  result = "";

  if( (sz=sizeof(trace) - 1) != 0 ) {
    for( i=0; i<sz; i++ ) {
      progname = trace[i][1];
      function = trace[i][2];
      objname = trace[i][0];
      line = trace[i][3];
      if( line == 0 ) {
        str = "    ";
      } else {
        str = "    " + line;
        str = str[strlen( str ) - 4 ..];
      }
      str += " " + function + " ";
      len = strlen( function );
      if( len < 17 ) {
        str += "                 "[len ..];
      }
      str += progname;
      if( progname != objname ) {
        len = strlen(progname);
        if( len < strlen(objname) && progname == objname[.. len - 1]) {
          str += " (" + objname[len ..] + ")";
        } else {
          str += " (" + objname + ")";
        }
      }
      result += ( str + "\n" );
      if(i == 0) {
        result += ((caught ? "[CAUGHT] ":"")+error + "\nObject: " + objname + ", program: " + progname + ", line " + line + "\n" );
      }
    }
  }
  return result;
}

void runtime_error(string error, mixed **trace, int caught, int ticks) {
  string result;
  object player;
  string * lines;
  int i, sz;

  result = format_runtime_error( error, trace, caught, ticks );

  if(this_user()) {
    player = this_user()->query_player();
  }
  if(caught) {
    DRIVER->set_tls_var(TLS_CAUGHT_ERROR, result);
    if(player) {
      mixed display_caught;

      display_caught = player->query_env("display_caught");
      if(intp(display_caught)) display_caught = (string) display_caught;
      switch(display_caught) {
        case "on" :
        case "1"  :
          player->write( "%^ORANGE%^"+result+"%^RESET%^\n" );
          break;
      }
    }
  } else {
    lines = explode( result, "\n" );
    for(i = 0, sz = sizeof(lines); i < sz; i++ ) {
      console_msg(lines[i]+"\n");
    }
    write_file("/logs/errors/runtime", result+"\n");
    if(player) {
      player->write("%^RED%^"+result+"%^RESET%^\n");
    }
  }
}

    

