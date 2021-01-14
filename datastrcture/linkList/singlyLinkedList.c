#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//节点结构体
struct LinkNode
{
    //数据域
    void *data;
    //指针域
    struct LinkNode *next;
};

//链表结构体
struct LList
{
    //头节点
    struct LinkNode pHeader;
    //链表长度
    int m_size;
};

typedef void *LinkList;

//初始化链表
LinkList init_LinkList()
{
    struct LList *myList = malloc(sizeof(struct LList));
    myList->pHeader.data = NULL;
    myList->pHeader.next = NULL;
    myList->m_size = 0;

    return myList;
}

//插入链表
void insert_LinkList(LinkList list, int pos, void *data)
{
    struct LList *myList = list;
    if (!list || !data)
    {
        return;
    }

    struct LinkNode *newNode = malloc(sizeof(struct LinkNode));
    newNode->data = data;
    newNode->next = NULL;
    struct LinkNode *temp = &myList->pHeader;
    if (pos <= 0 || pos > myList->m_size)
    {
        pos = myList->m_size;
    }
    // search prev node
    for (int i = 0; i < pos; ++i)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    myList->m_size++;
}

//遍历链表
void foreach_LinkList(LinkList list, void (*myForeach)(void *))
{
    if (list == NULL)
    {
        return;
    }

    struct LList *mylist = list;

    struct LinkNode *pCurrent = mylist->pHeader.next;

    for (int i = 0; i < mylist->m_size; i++)
    {
        myForeach(pCurrent->data);
        pCurrent = pCurrent->next;
    }
}

//删除链表  按位置
void removeByPos_LinkList(LinkList list, int pos)
{
    if (list == NULL)
    {
        return;
    }
    struct LList *myList = list;
    if(pos<0 || pos>=myList->m_size)
    {
        pos=myList->m_size-1;
    }
    struct LinkNode *temp = &myList->pHeader;
    int i = 0;
    while (i<pos)
    {
        temp=temp->next;
        ++i;
    }
    struct LinkNode *pDel=temp->next;
    temp->next=temp->next->next;
    free(pDel);
    pDel=NULL;
    myList->m_size--;

    
}

//按照值删除链表
void removeByValue_LinkList(LinkList list, void *data, int (*myCompare)(void *, void *))
{
    if (list == NULL)
    {
        return;
    }
    if (data == NULL)
    {
        return;
    }
    struct LList *myList = list;
    struct LinkNode *temp = &myList->pHeader;
    while (!myCompare(temp->next->data,data))
    {
        temp=temp->next;
    }
    struct LinkNode *pDel=temp->next;
    temp->next=temp->next->next;
    free(pDel);
    pDel=NULL;
    myList->m_size--;

    
}

//清空链表
void clear_LinkList(LinkList list)
{
    if (list == NULL)
    {
        return;
    }

    struct LList *mylist = list;

    struct LinkNode *pCurrent = mylist->pHeader.next;

    for (int i = 0; i < mylist->m_size; i++)
    {
        struct LinkNode *pNext = pCurrent->next;

        free(pCurrent);

        pCurrent = pNext;
    }

    mylist->pHeader.next = NULL;
    mylist->m_size = 0;
}

//返回链表长度
int size_LinkList(LinkList list)
{
    if (list == NULL)
    {
        return -1;
    }

    struct LList *mylist = list;

    return mylist->m_size;
}

//销毁链表
void destroy_Linklist(LinkList list)
{
    if (list == NULL)
    {
        return;
    }

    //清空链表
    clear_LinkList(list);

    free(list);

    list = NULL;
}

//测试
struct Person
{
    char name[64];
    int age;
};

void myPrintPerson(void *data)
{
    struct Person *p = data;
    printf("姓名：%s  年龄：%d\n", p->name, p->age);
}

int myComparePerson(void *data1, void *data2)
{
    struct Person *p1 = data1;
    struct Person *p2 = data2;

    return strcmp(p1->name, p2->name) == 0 && p1->age == p2->age;
}

void test01()
{
    //准备数据
    struct Person p1 = {"亚瑟", 18};
    struct Person p2 = {"妲己", 20};
    struct Person p3 = {"安琪拉", 19};
    struct Person p4 = {"凯", 21};
    struct Person p5 = {"孙悟空", 999};
    struct Person p6 = {"李白", 999};

    //初始化链表
    LinkList mylist = init_LinkList();

    printf("链表长度为：%d\n", size_LinkList(mylist));

    //插入数据
    insert_LinkList(mylist, 0, &p1);
    insert_LinkList(mylist, 0, &p2);
    insert_LinkList(mylist, -1, &p3);
    insert_LinkList(mylist, 0, &p4);
    insert_LinkList(mylist, 1, &p5);
    insert_LinkList(mylist, 0, &p6);

    // 李白 凯 孙悟空 妲己 亚瑟 安琪拉

    //遍历
    foreach_LinkList(mylist, myPrintPerson);

    printf("链表长度为：%d\n", size_LinkList(mylist));

    //测试删除
    removeByPos_LinkList(mylist, 4);

    printf("------------------\n");

    foreach_LinkList(mylist, myPrintPerson);
    printf("链表长度为：%d\n", size_LinkList(mylist));

    struct Person p = {"孙悟空", 999};
    removeByValue_LinkList(mylist, &p, myComparePerson);

    printf("------------------\n");

    foreach_LinkList(mylist, myPrintPerson);
    printf("链表长度为：%d\n", size_LinkList(mylist));

    //测试清空
    clear_LinkList(mylist);

    //返回链表长度
    printf("链表长度为：%d\n", size_LinkList(mylist));

    //销毁
    destroy_Linklist(mylist);
    mylist = NULL;
}

int main()
{

    test01();

    return EXIT_SUCCESS;
}