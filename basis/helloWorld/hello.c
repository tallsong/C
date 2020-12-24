#include<stdio.h>

int main()
{
    extern int a;  //声明变量 不需要建立存储空间
    //a=10;  error 
    int b=10;//即是声明又是定义
    printf("hello,world\n");
    return 0;// excute successful
}