#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// hellowrld --- 'm'
char *myStrch(char *str, char ch)
{
    int i=0;
    while (str[i])
    {
        /* code */
        if(str[i]==ch)
        {
            return  &str[i];
        }
        ++i;
    }
    return NULL;
    
}

// hellowrld --- 'o'
char *myStrch2(char *str, char ch)
{
    while (*str!='\0')
    {
        /* code */
        if(*str==ch)
        {
            return str;
        }
        ++str;
    }
    return NULL;
}

int main(void)
{
	char str[] = "hello world";
	char ch = ' ';

	char *ret = NULL; 

	ret = myStrch2(str, ch);

	printf("ret = %s\n", ret);

	return EXIT_SUCCESS;
}
