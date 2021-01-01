#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct  Person
{
    char * name;
    int age;
};




struct Person ** allocate()
{
    struct Person **p=malloc(sizeof(struct Person *)*3);
    for(int i=0;i<3;++i)
    {
        p[i] =malloc(sizeof(struct Person));
        p[i]->name=malloc(sizeof(char)*64);
        sprintf(p[i]->name,"name_%d",i+1);
        p[i]->age=i*10;

    }
    return p;
}

void printPerson(struct Person **p)
{
    for(int i=0;i<3;++i)
    {
        printf("No %d, name:%s, age:%d\n",i,p[i]->name,p[i]->age);
    }
}

void freeSpace(struct Person **p)
{
    for(int i=0;i<3;++i)
    {
        free(p[i]->name);
        free(p[i]);
    }
    free(p);
}



int main()
{
    printPerson(allocate());
    return EXIT_SUCCESS;
}