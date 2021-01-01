#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Teacher
{
	char * name;
	char ** students;
};

void allocateSpace(struct Teacher*** teachers)
{
    if(teachers==NULL)
    {
        return;
    }
    struct Teacher ** pp = malloc(sizeof(struct Teacher *)*8);
    for(int i=0;i<8;++i)
    {
        pp[i]=malloc(sizeof(struct Teacher));
        pp[i]->name=malloc(sizeof(char)*128);
        sprintf(pp[i]->name,"teacher_%d",i+1);
        pp[i]->students=malloc(sizeof(char *)*2);
        for(int j=0;j<2;++j)
        {
            pp[i]->students[j]=malloc(sizeof(char)*128);
            sprintf(pp[i]->students[j],"teacher_%d_student_%d",i+1,j+1);
        }
    }
    *teachers=pp;
}

void printTeachers(struct Teacher** pArray)
{
    for(int i=0;i<8;++i)
    {
        printf("%s\n",pArray[i]->name);
        for(int j=0;j<2;++j)
        {
            printf("\t%s\n",pArray[i]->students[j]);
        }
        
    }
}

void freeSpace(struct Teacher ** pp)
{
    for(int i=0;i<8;++i)
    {
        free(pp[i]->name);
        for(int j=0;j<2;++j)
        {
            free(pp[i]->students[j]);
        }
        free(pp[i]->students);
        free(pp[i]);
    }
    free(pp);



}

void test01()
{
	struct Teacher ** pArray = NULL;
	//开辟内存
	allocateSpace(&pArray);

	//打印数组
	printTeachers(pArray);

	// //释放数组
	freeSpace(pArray);
	pArray = NULL;

}


int main(){

    while (1)
    {
        test01();
        /* code */
    }
    
	test01();

	return EXIT_SUCCESS;
}