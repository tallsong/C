#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

const char *FILENAME = "file.txt";

void write_rand()
{
    FILE *pFile = fopen(FILENAME, "w");
    if (!pFile)
    {
        perror("open error");
    }
    srand(time(NULL));
    for (size_t i = 0; i < 10; i++)
    {
        fprintf(pFile, "%d\n", rand() % 100);
    }
    fclose(pFile);
}

void BubbleSort(int *src, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (src[j] > src[j + 1])
            {
                int temp = src[j];
                src[j] = src[j + 1];
                src[j + 1] = temp;
            }
        }
    }
}

void read_rand02()
{
    int arr[10];
    int i = 0;
    FILE *pFile = fopen(FILENAME, "r");
    while (1)
    {
        fscanf(pFile, "%d\n",(arr+i));
        ++i;
        if (feof(pFile))
        {
            break;
        }
    }
    fclose(pFile);
    BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
    pFile = fopen(FILENAME, "w");
    if (!pFile)
    {
        perror("open error");
    }
    for (size_t i = 0; i < 10; i++)
    {
        fprintf(pFile, "%d\n", arr[i]);
    }
    fclose(pFile);
}

int main(void)
{
    write_rand();

    read_rand02();

    return EXIT_SUCCESS;
}
