#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>




void test1()
{
    char * str="hello,world";
    char buff[1024]={0};
    sscanf(str,"%*d%s",buff);
    printf("%s\n",buff);
}



int main()
{
    test1();
    return EXIT_SUCCESS;
}