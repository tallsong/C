#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void func(int a ,char c)
{
	printf("hello world\n");
}


void t1()
{
    typedef void(f1)(int,char);
    f1 * p=func;
    typedef void(* f2)(int,char);
    f2 p2=func;
    void (* f3)(int,char)=func;

}