#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void insertSort(int arr[], int len)
{
    for(int i=1;i<len;++i)
    {
        for(int j=0;j<i;++j)
        {
            if(arr[j]>arr[i])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                break;
            }
        }
    }
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void test01()
{
    int arr[] = {4, 1, 2, 3, 5, 7, 6};
    //插入排序
    int len = sizeof(arr) / sizeof(int);
    insertSort(arr, len);

    //打印数组
    printArray(arr, len);
}

int main()
{

    test01();

    return EXIT_SUCCESS;
}