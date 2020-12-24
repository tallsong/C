#include<stdio.h>
struct  Stu
{
    /* data */
    long A;
    long long B;
};

int main()
{
    char ch;
    printf("input ch\n");
    scanf("%c",&ch);
    printf("%c\n",ch);
    printf("dsklfjsdf");
    printf("\bsdfds\n");
    printf("%d\n",'\123');//\123'为 8 进制转义字符，0123 对应 10 进制数为 83
    printf("%d\n",'\x23'); // '\x23'为 16 进制转义字符，0x23 对应 10 进制数为 35
    return 0;
}
