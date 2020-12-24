#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
	int arr[3][4] = {	{2, 7, 8, 5}, 
						{75, 8, 9, 8}, 
						{26, 37, 99, 9} };
    for(size_t i=0;i<sizeof(arr)/sizeof(arr[0]);++i)
    {
        for(size_t j=0;j<sizeof(arr[0])/ sizeof(arr[0][0]);++j)
        {
            printf("%d\n",arr[i][j]);
        }
    }



















	printf("数组的大小为：%u\n", sizeof(arr));
	printf("数组行的大小：%u\n", sizeof(arr[0]));
	printf("数组一个元素的大小：%u\n", sizeof(arr[0][0]));

	printf("行数=总大小/一行大小：%d\n", sizeof(arr)/ sizeof(arr[0]));
	printf("列数=行大小/一个元素大小：%d\n", sizeof(arr[0])/ sizeof(arr[0][0]));

	printf("arr= %p\n", arr);
	printf("&arr[0] = %p\n", &arr[0][0]);
	printf("arr[0] = %p\n", arr[0]);

	system("exit");
	return EXIT_SUCCESS;
}


