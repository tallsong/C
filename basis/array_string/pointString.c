#include<stdio.h>

int main()
{
    char *p="hello";
    char arr[]="hello";
   *(p)='r';
    arr[0]='r';
    printf("%s\t%s",p,arr);
    return 0;
}