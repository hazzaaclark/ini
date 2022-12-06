#include "ini.h"

#ifndef __INI_PARSER_MAIN__
#define __INI_PARSER_MAIN__
#endif

#define VALUES
#define WINDOW
#define DIRECTORIES

int main(int argc, char** argv)
{
	INI_MAIN* INI;
	INI->LOAD_INI("./");

	WINDOW const char* WIN_ITERATION_ = INI->GET_VALUE("", "");
	DIRECTORIES const char* DIRECT_ITERATION_ = INI->GET_VALUE("", "");
	return 0;
}
