/*--------------------------------------------------------------------*/
/* stra.c                                                          */
/* Author: Milan Sastry                                               */
/*--------------------------------------------------------------------*/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

/* Returns the length of pcSrc*/
size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

/*Copies the the char array pcSrc into pcDest and returns it*/
char *Str_copy(char pcDest[], const char pcSrc[]){
    size_t i = 0;
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    while (pcSrc[i] != '\0'){
        pcDest[i] = pcSrc[i];
        i++;
    }
    pcDest[i] = '\0';
    return pcDest;
}

/*Concatenates pcSrc to the end of pcDest and returns new string*/
char *Str_concat(char pcDest[], const char pcSrc[]){
    size_t i = 0;
    size_t j = 0;
    assert(pcSrc != NULL);
    assert(pcDest != NULL);
    while (pcDest[i] != '\0')
        i++;
    while (pcSrc[j] != '\0'){
        pcDest[i+j] = pcSrc[j];
        j++;
    }
    pcDest[i+j] = '\0';
    return pcDest;
}

/*Compares str1 and str2 by character, returns 0 if equal*/
int Str_compare(const char str1[], const char str2[]){
    size_t i = 0;
    assert(str1 != NULL);
    assert(str2 != NULL);
    while (str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]) return (int)(str1[i] - str2[i]);
        i++;
    }
    return (int)(str1[i] - str2[i]);
} 

/*Returns first occurance of needle in haystack, NULL if not found*/
char *Str_search(const char haystack[], const char needle[]){
    size_t i = 0;
    size_t j = 0;
    assert(haystack != NULL);
    assert(needle != NULL);
    if (needle[0] == '\0') return (char*)&haystack[0];
    while (haystack[i] != '\0'){
        while (needle[j] != '\0' && haystack[i] == needle[0]){
            if (haystack[i+j] != needle[j]) break;
            j++;
        }
        if (needle[j] == '\0') return (char*)&haystack[i];
        i++;
    }
    return NULL;
}