#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>
#include "str.h"

size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

char *Str_copy(char *pcDest, const char *pcSrc){
    const char *pi = *pcDest;
    assert(pcSrc != NULL);
    while(*pcSrc != '\0'){
        *pcDest = *pcSrc;
        pcDest++;
        pcSrc++;
    }
    *pcDest = '\0';
    return pi;
}

char *Str_concat(char *pcDest, const char *pcSrc){
    const char *pi = *pcDest;
    assert(pcSrc != NULL);
    while(*pcDest != '\0'){
        pcDest++;
    }
    while(*pcSrc != '\0'){
        pcDest = *pcSrc;
        pcSrc++;
        pcDest++;
    }
    return pcDest;
}

int Str_compare(const char *str1, const char *str2){
    assert(str1 != NULL);
    assert(str2 != NULL);

    while (*str1 != '\0' && *str2 != '\0'){
        if (*str1 != *str2) return (int)(*str1 - *str2){
            str1++;
            str2++;
        }
    }
    return (int)(*str1 - *str2);
}


char *Str_search(const char *str1, const char *str2){
    const char *pi;
    assert(str1 != NULL);
    assert(str2 != NULL);
   
    if (*str2 == '\0') return str2;
    while(*str1 != '\0'){
        if (*str1 == *str2){
            pi = *str1;
            while(*str2 != '\0'){
                if (*str1 != *str2) break;
                pi++;
            }
            if (*pi == '\0') return str1;
        }
        str1++;
        str2++;
    }
    return NULL;
}

