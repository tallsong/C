#include<stdio.h>
#define MAX 10

int main()
{
    int a;
    const int b=10;
    a=MAX;
    a=123;
    printf("%d\n",a);

    return 0;
}