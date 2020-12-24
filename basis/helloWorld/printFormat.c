#include<stdio.h>
struct  Stu
{
    /* data */
    long A;
    long long B;
};

int main()
{
    int a=10;
    int b = 012;  //八进制0开头
    int c =0x21;  // 16进制 0x开头
    printf("八进制a:%o\n",a);
    printf("10进制a:%d\n",a);
    printf("十六进制a:%x\n",a);
    unsigned int d =0xffffff;
    printf("signed：%d\n",d);
    printf("unsigned:%u\n",d);
    int e;
    printf("input e:\n");
    scanf("%d",&e);
    printf("e:%d\n",e);

    short a1=234;
    int a2=234;
    long a3 =101L;
    long long a4=324234L;
    printf("size of short =%lu\n",sizeof(a1));
    printf("size of int = %lu\n",sizeof(a2));
    printf("size of long = %lu\n",sizeof(a3));
    printf("size of long long =%lu\n",sizeof(a4));
    signed int a8=-23232;
    printf("brinary:%X\n",a8);  //%X为16进制


    char ch;
    printf("input ch");
    scanf("%c",&ch);
    printf("%c\n",ch);


    return 0;
}