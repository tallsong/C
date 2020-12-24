#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// src ： 有空格字符串， dst：没有空格的字符串
void str_no_space(char *src, char *dst)
{
    int i=0;
    int j=0;
    while (src[i]!='\0')
    {
        if(src[i]!=' ')
        {
            dst[j]=src[i];
            ++j;
        }
        ++i;
    }
    dst[j]='\0';
    
}
// 指针版
void str_no_space2(char *src, char *dst)
{
    while (*src)
    {
        /* code */
        if(*src!=' ')
        {
            *dst=*src;
            ++dst;
        }
        ++src;
    }
    *dst='\0';
    

}

int main(void)
{
	char str[] = "ni chou sha chou ni za di";
	char dst[100] = {0};

	str_no_space2(str, dst);

	printf("dst = %s\n", dst);

	return EXIT_SUCCESS;
}
