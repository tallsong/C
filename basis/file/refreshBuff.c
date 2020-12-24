#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
    FILE *p=fopen("/home/root/Clang/file.txt","w+");
    if(!p)
    {
        printf("error!");
        return -1;
    }
    char c=0;
    while (1)
    {
        scanf("%c",&c);
        if(c==':')
        {
            break;
        }
        fputc(c,p);
        fflush(p);
    }
    fclose(p);
    
	return EXIT_SUCCESS;
}
