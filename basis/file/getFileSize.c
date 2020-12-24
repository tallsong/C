#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include <sys/types.h>
#include <sys/stat.h>

/*
FILE *fp = fopen("test05.txt", "r");

fseek(fp, 0, SEEK_END);

int len = ftell(fp);

printf("文件大小：%d\n", len);

fclose(fp);
*/

int main(void)
{
    struct stat buf;
    int res= stat("/home/root/Clang/file.txt",&buf);
    printf("size:%d",buf.st_size);
    return EXIT_SUCCESS;
}
