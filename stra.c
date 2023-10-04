#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}
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

int Str_compare(const char str1[], const char str2[]){
    size_t i = 0;
    assert(str1 != NULL);
    assert(str2 != NULL);

   

    while (str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]) return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
} 

char *Str_search(const char str1[], const char str2[]){
     size_t i = 0;
    size_t j = 0;
    assert(str1 != NULL);
    assert(str2 != NULL);


   
    if (str2[0] == '\0') return (char*)&str1[0];
    while (str1[i] != '\0'){
        if (str1[i] == str2[0]){
            while (str2[j] != '\0'){
                if (str1[i+j] != str2[j]){
                    break;
                }
                j++;
            }
            if (str2[j] == '\0') return (char*)&str1[i];
        }
        i++;
    }
 
    return NULL;


}