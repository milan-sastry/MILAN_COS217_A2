#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

size_t Str_getLength(const char pcSrc[]);

char *Str_copy(char pcDest[], const char pcSrc[]);

char *Str_concat(char pcDest[], const char pcSrc[]);

int Str_compare(const char str1[], const char str2[]);

char *Str_search(const char str1[], const char str2[]);

size_t Str_getLength(const char *pcSrc);

char *Str_copy(char *pcDest, const char *pcSrc);

char *Str_concat(char *pcDest, const char *pcSrc);

int Str_compare(const char *str1, const char *str2);

char *Str_search(const char *str1, const char *str2);