#include<iostream>



int main()
{
    int a{10};
    int *p{&a};
    int **pp{&p};
    int ***ppp{&pp};
    std::cout<<&a<<'\n';
    std::cout<<&p<<'\n';
    std::cout<<pp<<'\n';
    std::cout<<*pp<<'\n'; //&a
    std::cout<<*ppp<<'\n'; //&a
    std::cout<<**pp<<'\n';
    std::cout<<&pp<<'\n';
    return EXIT_SUCCESS;
}