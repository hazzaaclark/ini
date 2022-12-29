#ifndef INI_PARSER_MAIN
#define INI_PARSER_MAIN

#include "ini.h"
#include <stdio.h>
#include <string.h>

#ifndef WHITESPACE
#define WHITESPACE 1

static char* WHITESPACE_STRIP(char* STRIP, char* PLACE)
{
	PLACE = STRIP + strlen(STRIP);
}

#endif

static char* READER_STRING(const char* STRING, int NUM, void* STREAM)
{
	PARSE_STATE* PS = (PARSE_STATE*) STREAM;
	PARSE_STATE::POINTER;
}

static void PARSED()
{
	PARSE;
	PARSE_FILE;
	return;
}

#endif
