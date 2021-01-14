#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct LinkNode
{
    int num;
    struct LinkNode *next;
};




int main()
{   
    struct LinkNode node1={10,NULL};
    struct LinkNode node2={20,NULL};
    struct LinkNode node3={30,NULL};
    struct LinkNode node4={10,NULL};
    struct LinkNode node5={10,NULL};
    struct LinkNode node6={690,NULL};
    node1.next=&node2;
    node2.next=&node3;
    node3.next=&node4;
    node4.next=&node5;
    node5.next=&node6;
    struct LinkNode *head=&node1;
    while (head)
    {
        printf("%d\n",head->num);
        head=head->next;
    }
    
    return EXIT_SUCCESS;
}