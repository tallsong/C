#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



char * getString()
{
    char p[]="I love you!";
    return p;
}


int main()
{
    char *p=getString();
    printf("%s\n",p);
    return 0;
}