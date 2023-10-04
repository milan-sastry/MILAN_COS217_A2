/*--------------------------------------------------------------------*/
/* strp.c                                                          */
/* Author: Milan Sastry                                               */
/*--------------------------------------------------------------------*/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

/* Returns the length of pcSrc*/
size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

/*Copies the the char array pcSrc into pcDest and returns it*/
char *Str_copy(char *pcDest, const char *pcSrc){
    char *pi = pcDest;
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    while(*pcSrc != '\0'){
        *pcDest = *pcSrc;
        pcDest++;
        pcSrc++;
    }
    *pcDest = '\0';
    return pi;
}

/*Concatenates pcSrc to the end of pcDest and returns new string*/
char *Str_concat(char *pcDest, const char *pcSrc){
    char *pi = pcDest;
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    while(*pcDest != '\0'){
        pcDest++;
    }
    while(*pcSrc != '\0'){
        *pcDest = *pcSrc;
        pcSrc++;
        pcDest++;
    }
    *pcDest = '\0';
    return pi;
}

/*Compares str1 and str2 by character, returns 0 if equal*/
int Str_compare(const char *str1, const char *str2){
    assert(str1 != NULL);
    assert(str2 != NULL);
    while (*str1 != '\0' && *str2 != '\0'){
        if (*str1 != *str2) return (int)(*str1 - *str2);
        str1++;
        str2++;
    }
    return (int)(*str1 - *str2);
}

/*Returns first occurance of needle in haystack, NULL if not found*/
char *Str_search(const char *str1, const char *str2){
    assert(str1 != NULL);
    assert(str2 != NULL);
    if (*str2 == '\0') return (char*)str1;
    while(*str1 != '\0'){
        const char *pi1 = str1;
        const char *pi2 = str2;
        while(*pi1 == *pi2 && *pi2 != '\0'){
            pi1++;
            pi2++;
        }
        if (*pi2 == '\0') return (char*)str1;
        str1++;
    }
    return NULL;
}