#include "seqStack.h"

struct SStack
{
	void *data[MAX]; //栈的数组

	int m_Size; //栈大小
};

//初始化栈
SeqStack init_SeqStack()
{
	struct SStack *p = malloc(sizeof(struct SStack));
	memset(p->data,0,sizeof(void *)*MAX);
	p->m_Size=0;
	return p;
}
//入栈
void push_SeqStack(SeqStack stack, void * data)
{
	struct SStack *p=stack;
	if(p->m_Size>=MAX)
	{
		return;
	}
	p->data[p->m_Size]=data;
	p->m_Size++;


}

//出栈
void pop_SeqStack(SeqStack stack)
{
	struct SStack *p=stack;
	if(p->m_Size<=0)
	{
		return;
	}
	p->data[p->m_Size-1]=NULL;
	--p->m_Size;
}

//返回栈顶
void * top_SeqStack(SeqStack stack)
{
	struct SStack *p=stack;
	if(p->m_Size==0)
	{
		return NULL;
	}
	return p->data[p->m_Size-1];
}

//返回栈大小
int size_SeqStack(SeqStack stack)
{
	struct SStack *p=stack;
	return p->m_Size;
}

//判断栈是否为空
int isEmpty_SeqStack(SeqStack stack)
{
	struct SStack *p=stack;
	if(p==NULL)
	{
		return -1;
	}
	if(p->m_Size==0)
	{
		return 1;
	}
	return 0;
}

//销毁栈
void destroy_SeqStack(SeqStack stack)
{
	struct SStack *p=stack;
	free(p);
	p=NULL;
}