/*--------------------------------------------------------------------*/
/* stra.c                                                          */
/* Author: Milan Sastry                                               */
/*--------------------------------------------------------------------*/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

/* Returns the length of pcSrc*/
size_t Str_getLength(const char pcSrc[]);

/*Copies the the char array pcSrc into pcDest and returns it*/
char *Str_copy(char pcDest[], const char pcSrc[]);

/*Concatenates pcSrc to the end of pcDest and returns new string*/
char *Str_concat(char pcDest[], const char pcSrc[]);

/*Compares str1 and str2 by character, returns 0 if equal*/
int Str_compare(const char str1[], const char str2[]);

/*Returns first occurance of needle in haystack, NULL if not found*/
char *Str_search(const char haystack[], const char needle[]);

/* Returns the length of pcSrc*/
size_t Str_getLength(const char *pcSrc);

/*Copies the the char array pcSrc into pcDest and returns it*/
char *Str_copy(char *pcDest, const char *pcSrc);

/*Concatenates pcSrc to the end of pcDest and returns new string*/
char *Str_concat(char *pcDest, const char *pcSrc);

/*Compares str1 and str2 by character, returns 0 if equal*/
int Str_compare(const char *str1, const char *str2);

/*Returns first occurance of needle in haystack, NULL if not found*/
char *Str_search(const char *haystack, const char *needle);