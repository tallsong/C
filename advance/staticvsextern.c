#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

static int a=1;
void test()
{   
    a=2;
}

int main()
{

    extern int g_a;
    static int a=3;
    test();
    return EXIT_SUCCESS;
}