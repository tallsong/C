#include<stdio.h>

void printArraay(int *p,int n)
{
    for(int i=0;i<n;++i)
    {
        printf("%d",p[i]);
    }
}


int main()
{
    char buff[]={'d','f'};
    printf("%s",buff);
    int a[6]={1,3,3,3,3,5};
    printArraay(a,sizeof(a)/sizeof(a[0]));
    return 0;
}