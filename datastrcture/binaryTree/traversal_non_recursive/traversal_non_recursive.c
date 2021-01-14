#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "seqStack.h"

struct BinaryNode
{
	//数据域
	char ch;
	//指针域
	struct BinaryNode *lChild;
	struct BinaryNode *rChild;
	//标志
	int flag;
};

/*
1、将根节点 入栈 
2、只要栈中元素个数大于 0  执行循环
	获取栈顶元素
	出栈
	如果标志位真  直接输出  并且执行下一次循环
	如果为假 将标志改为真
	将右子树  左子树 根 入栈
	执行下一次循环
*/

void nonRecursion(struct BinaryNode *root)
{
	//初始化栈
	SeqStack stack =init_SeqStack();
	push_SeqStack(stack,root);
	while (size_SeqStack(stack))
	{
		struct BinaryNode *top = top_SeqStack(stack);
		

		if(top->flag)
		{
			printf("%c\t",top->ch);
			pop_SeqStack(stack);
			continue;
		}
		
		if(top->lChild)
		{
			push_SeqStack(stack,top->lChild);
		}
		if(top->rChild)
		{
			push_SeqStack(stack,top->rChild);
		}
		top->flag=1;
	}
	
}

void test01()
{
	struct BinaryNode nodeA = {'A', NULL, NULL, 0};
	struct BinaryNode nodeB = {'B', NULL, NULL, 0};
	struct BinaryNode nodeC = {'C', NULL, NULL, 0};
	struct BinaryNode nodeD = {'D', NULL, NULL, 0};
	struct BinaryNode nodeE = {'E', NULL, NULL, 0};
	struct BinaryNode nodeF = {'F', NULL, NULL, 0};
	struct BinaryNode nodeG = {'G', NULL, NULL, 0};
	struct BinaryNode nodeH = {'H', NULL, NULL, 0};

	//建立关系
	nodeA.lChild = &nodeB;
	nodeA.rChild = &nodeF;

	nodeB.rChild = &nodeC;

	nodeC.lChild = &nodeD;
	nodeC.rChild = &nodeE;

	nodeF.rChild = &nodeG;

	nodeG.lChild = &nodeH;

	//非递归遍历
	nonRecursion(&nodeA);
}

int main()
{
	test01();

	return EXIT_SUCCESS;
}