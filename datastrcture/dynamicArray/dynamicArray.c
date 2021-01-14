#include "dynamicArray.h"

//初始化数组
struct dynamicArray *init_DynamicArray(int capacity)
{
    struct dynamicArray *array = malloc(sizeof(struct dynamicArray));
    array->pAddr = malloc(sizeof(void *) * capacity);
    array->m_size = 0;
    array->m_capacity = capacity;
}

//插入数组
void insert_DynamicArray(struct dynamicArray *array, int pos, void *data)
{
    if (array == NULL)
    {
        return;
    }
    if (pos < 0 || pos >= array->m_size)
    {
        pos = array->m_size;
    }
    if (array->m_size >= array->m_capacity)
    {
        void **newSpace = malloc(sizeof(void *) * 2 * array->m_capacity);
        memcpy(newSpace, array->pAddr, sizeof(void *) * array->m_capacity);
        free(array->pAddr);
        array->pAddr = newSpace;
        array->m_capacity = array->m_capacity * 2;
    }
    for (int i = array->m_size - 1; i >= pos; --i)
    {
        array->pAddr[i + 1] = array->pAddr[i];
    }
    array->pAddr[pos] = data;
    array->m_size++;
}

//遍历数组
void foreach_DynamicArray(struct dynamicArray *array, void (*myPrint)(void *))
{
	if (array == NULL)
	{
		return;
	}
	if (myPrint == NULL)
	{
		return;
	}

	for (int i = 0; i < array->m_size; i++)
	{
		myPrint(array->pAddr[i]);
	}
}

//删除数组  按位置删除
void removeByPos_DynamicArray(struct dynamicArray *array, int pos)
{
    if (pos < 0 || pos >= array->m_size)
    {
        pos = array->m_size;
    }
    for (int i = pos; i < array->m_size - 1; ++i)
    {
        array->pAddr[i] = array->pAddr[i + 1];
    }
    array->m_size--;
}

//按值删除数据
void removeByValue_DynamicArray(struct dynamicArray *array, void *data, int (*myCompare)(void *, void *))
{
    for(int i=0;i<array->m_size;++i)
    {
        if(array->pAddr[i]==data)
        {
            removeByPos_DynamicArray(array,i);
            break;
        }
    }
}

//销毁数组
void destroy_DynamicArray(struct dynamicArray *array)
{
    if(array==NULL)
    {
        return;
    }
    if(array->pAddr)
    {
        free(array->pAddr);
        array->pAddr=NULL;
    }
    free(array);
    array=NULL;
}
