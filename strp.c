/*--------------------------------------------------------------------*/
/* strp.c                                                          */
/* Author: Milan Sastry                                               */
/*--------------------------------------------------------------------*/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

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
    char *pc = pcDest;
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    while(*pcSrc != '\0'){
        *pcDest = *pcSrc;
        pcDest++;
        pcSrc++;
    }
    *pcDest = '\0';
    return pc;
}

char *Str_concat(char *pcDest, const char *pcSrc){
    char *pc = pcDest;
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
    return pc;
}

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

char *Str_search(const char *haystack, const char *needle){
    assert(haystack != NULL);
    assert(needle != NULL);
    if (*needle == '\0') return (char*)haystack;
    while(*haystack != '\0'){
        const char *pc1 = haystack;
        const char *pc2 = needle;
        while(*pc1 == *pc2 && *pc2 != '\0'){
            pc1++;
            pc2++;
        }
        if (*pc2 == '\0') return (char*)haystack;
        haystack++;
    }
    return NULL;
}