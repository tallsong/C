#include<iostream>

int main()
{
    typedef char * pchar;
    pchar p1;
    pchar p2;
    printf("type of p1 is %s\n",typeid(p1).name());
    printf("type of p2 is %s\n",typeid(p2).name());

    return EXIT_SUCCESS;


}