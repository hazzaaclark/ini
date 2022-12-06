#pragma once

#ifndef __INI_PARSER__
#define __INI_PARSER__
#endif

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define NEW_LINE_CHAR "\r\n"
#define NEW_LINE_CHAR "\r"
#define NEW_LINE_CHAR "n"

#if defined(_WIN32) || defined(_WIN64)
#define INI_PARSER_MAIN
#endif

#define USE_STD_MAP 0
#define EQUIVALENCE "=" 1
#define NO_CHAR 2

struct STD_MAP;
struct STD_EQUIVALENCE;
struct STD_NO_CHAR;

typedef struct
{
	const char* KEY;
	const char* VALUE;

} INI_VALUES;

typedef struct
{
	INI_VALUES* KEY_VALUE;
	const char* SECTION_NAME;
	LONG KEY_VALUE_COUNT;


} INI_SECTION;
