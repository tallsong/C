#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void copyString01(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
}

void copyString02(char *dest, char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        ++src;
        ++dest;
    }
    *dest = '\0';
}

void copyString03(char *dest, char *src)
{
    while (*dest++ = *src++)
    {
        /* code */
    }
}

void reverseString01(char * str)
{
    int len=strlen(str);
    int start=0;
    int end=len-1;
    while (start<len)
    {
        char tmp=str[start];
        str[start]=str[end];
        str[end]=tmp;
        ++start;
        ++end;
    }
    
}