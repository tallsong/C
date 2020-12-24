#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    char h[]="hello";
    char w[]="world";
    char sum[100];
    int i=0;
    int j=0;
    while (h[i])
    {
        sum[i]=h[i];
        ++i;
    }
    while (w[j])
    {
        /* code */
        sum[i+j]=w[j];
        ++j;
    }
    sum[i+j]='\0';
    printf("%s\n",sum);
    
    
}