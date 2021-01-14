#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "seqQueue.h"

struct Person
{
    char name[64];
    int age;
};
void test01()
{
    //初始化队列
    seqQueue myQueue = init_SeqQueue();

    //准备数据
    struct Person p1 = {"aaa", 10};
    struct Person p2 = {"bbb", 20};
    struct Person p3 = {"ccc", 30};
    struct Person p4 = {"ddd", 40};

    //入队
    push_SeqQueue(myQueue, &p1);
    push_SeqQueue(myQueue, &p2);
    push_SeqQueue(myQueue, &p3);
    push_SeqQueue(myQueue, &p4);
    printf("队列大小为：%d\n", size_SeqQueue(myQueue));
    while (isEmpty_SeqQueue(myQueue) == 0)
    {
        //访问队头
        struct Person *pFront = front_SeqQueue(myQueue);
        printf("队头元素 -- 姓名：%s  年龄： %d\n", pFront->name, pFront->age);
        //访问队尾
        struct Person *pBack = back_SeqQueue(myQueue);
        printf("队尾元素 -- 姓名：%s  年龄： %d\n", pBack->name, pBack->age);
        //出队
        pop_SeqQueue(myQueue);
    }

    printf("队列大小为：%d\n", size_SeqQueue(myQueue));

    //销毁队列
    destroy_SeqQueue(myQueue);
}

int main()
{
    test01();

    return EXIT_SUCCESS;
}