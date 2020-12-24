#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// src: 源  dst： 目标
//数组版本
void mystrcpy(char *src, char *dst)
{
    int i = 0;
    while (src[i] != '\0')
    {
        /* code */
        dst[i] = src[i];
        ++i;
    }
    dst[i] = '\0';
}
//指针版
void mystrcpy2(char *src, char *dst)
{
    while (*src != '\0')
    {
        *dst = *src;
        ++dst;
        ++src;
    }
    *dst = '\0';
}

int main1(void)
{
    char *src = "helloworldfuoie11ll";

    char dst[100];

    mystrcpy2(src, dst);

    printf("dst = %s\n", dst);

    system("ls");
    return EXIT_SUCCESS;
}
int main()
{
    char src[] = "hello world";
    char dest[100] = {0};

    char *p = strncpy(dest, src, 100);
    ; // 字符串src 拷贝给dest
    for (size_t i = 0; i < 10; i++)
    {
        printf("%c\n", p[i]);
    }

    printf("p= %s\n", p);
    printf("dest = %s\n", dest);
    return 0;
}
