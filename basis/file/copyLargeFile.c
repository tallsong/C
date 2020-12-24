#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void myfile_cp()
{
    FILE *rfp = fopen("/home/root/redis.tar","rb");
    FILE *wfp=fopen("/home/root/redis.bal.tar","wb");
    int ret=0;
    char buff[4096]={0};
    
    while (1)
    {
        memset(buff,0,sizeof(buff));
        ret=fread(buff,1,sizeof(buff),rfp);
        if(!ret)
        {
            break;
        }
        fwrite(buff,1,ret,wfp);
    }
    fclose(rfp);
    fclose(wfp);
    
}

int main(void)
{
    myfile_cp();

    printf("---------------------finish\n");

    return EXIT_SUCCESS;
}
