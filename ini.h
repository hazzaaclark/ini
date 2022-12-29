#pragma once

#ifndef INI_PARSER
#define INI_PARSER
#endif

#include <stdio.h>

#if defined(_WIN32) || defined(_WIN64)
#define __declspec(dllexport)
#else
#define __declspec(dllimport)
#endif


#ifndef ALLOW_ML_RW
#define ALLOW_ML_RW 1
#endif

#ifndef ALLOW_BYTE_ORDER
#define ALLOW_BYTE_ORDER 1
#endif 

#ifndef MAX_LINE
#define MAX_LINE 200
#endif

typedef int* HANDLER(void* USER, const char* SECTION, const char* NAME, const char* VALUE);
typedef char* READER(char* STRING, int NUM, void* STREAM);

#ifndef STACK
#define STACK 1

typedef struct
{
	static void* MALLOC(size_t SIZE);
	static void FREE(void* POINTER);
	static void* REALLOC(void* POINTER, size_t SIZE);

} USE_STACK;

#endif


/* CROSS COMPATIBILITY WITH C LOGIC */

#ifdef __cplusplus
extern "C"
{
}

#endif
