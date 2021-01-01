#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h> //offsetof的头文件
void changeValue(int *a) // int * a = &a2;
{
	*a = 1000;
}
void test01()
{
    int a = 10;
    int *p = NULL;

    p = &a;

    *p = 100;

    int a2 = 10;
    changeValue(&a2);

    printf("%d\n", a2);
    printf("%d\n", &a2);
}
void t1()
{
    char *p = NULL;
    printf("%d\n", p);
    printf("%d\n", p + 1);
    double *pd = NULL;
    printf("%d\n", pd);
    printf("%d\n", pd + 1);
    int *pi = NULL;
    printf("%d\n", pi);
    printf("%d\n", pi + 1);
}

void t2()
{
    char str[1000] = {0};
    int a = 1000;
    memcpy(str + 1, &a, sizeof(int));

    char *p = str;
    printf("%s\n", str);
    printf("%d\n", *(int *)(p + 1));
}
int main()
{
    t1();
    t2();
    test01();
    return EXIT_SUCCESS;
}