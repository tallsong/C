#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int arr[] = {2, 7, 3, 10 ,8, 5, 9, 88, 53};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while (i<j)
    {
        int tem=arr[i];
        arr[i]=arr[j];
        arr[j]=arr[i];
        i++;
        j--;
    }
    
	for (size_t i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}