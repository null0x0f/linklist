#include<stdio.h>
#include<malloc.h>
//循环单链表
//typedef struct node
//{
//	int data;
//	struct node* next;
//}Lnode,*linklist;
//bool initlinklist(linklist& L)
//{
//	L = (Lnode*)malloc(sizeof(Lnode));
//	if (L == NULL)
//	{
//		return false;
//	}
//	L->next = L;
//	return true;
//}
//linklist creatlinklist(linklist& L)
//{
//	Lnode* r = L;
//	Lnode* s;
//	int x;
//	scanf_s("%d",&x);
//	while (x != 9999)
//	{
//		s = (Lnode*)malloc(sizeof(Lnode));
//		s->data = x;
//		r->next = s;
//		r = s;
//		scanf_s("%d",&x);
//	}
//	r->next = L;
//	return L;
//}
//
//
//
////合并两个循环列表
//linklist merge(linklist& L1,linklist& L2)
//{
//	Lnode* p;
//	Lnode* q;
//	p = L1;
//	q = L2;
//	while (p->next != L1)
//	{
//		p = p->next;
//	}
//	while (q->next != L2)
//	{
//		q = q->next;
//	}
//	q->next = L1;
//	p->next = L2->next;
//	free(L2);
//	return L1;
//}
//void output(linklist L)
//{
//	Lnode* p;
//	p = L->next;
//	while (p!=L)
//	{
//		printf("%d ",p->data);
//		p = p->next;
//	}
//}
//int main(void)
//{
//	linklist L1,L2,L;
//	initlinklist(L1);
//	initlinklist(L2);
//	L1 = creatlinklist(L1);
//	L2 = creatlinklist(L2);
//	L = merge(L1, L2);
//	output(L);
//	return 0;
//}



//双向链表
//typedef struct dnode
//{
//	int data;
//	struct dnode* prior;
//	struct dnode* next;
//}dLnode,*dulinklist;
//bool initdulinklist(dulinklist&L)//初始化
//{
//	L = (dLnode*)malloc(sizeof(dLnode));
//	if (L == NULL)
//	{
//		return false;
//	}
//	L->prior = NULL;
//	L->next = NULL;
//	return true;
//}
//void creatdulinklist(dulinklist&L)
//{
//	dLnode* s;
//	dLnode* p = L                      ;
//	int x = 0;
//	scanf_s("%d",&x);
//	while (x != 9999)
//	{
//		s = (dLnode*)malloc(sizeof(dLnode));
//		s->data = x;
//		p->next = s;
//		s->prior = p;
//		p = s;
//		scanf_s("%d",&x);
//	}
//	p->next = NULL;
//	p->prior = NULL; 
//}
//void output(dulinklist L)
//{
//	dLnode* s = L->next;
//	if (L == NULL)
//	{
//		printf("链表为空\n");
//	}
//	while(s!= NULL)
//	{
//		printf("%d ",s->data);
//		s = s->next;
//	}
//}
//bool insertdulinklist(dulinklist& L)
//{
//
//}
//双向循环链表
//typedef struct cdunode
//{
//	int data;
//	struct cdunode* prior;
//	struct cdunode* next;
//}duLnode,*cdulinklist;
//
//bool initcdunode(cdulinklist&L)//初始化
//{
//	L = (duLnode*)malloc(sizeof(duLnode));
//	if (L == NULL)
//	{
//		return false;
//	}
//	L->prior = L;
//	L->next = L;
//	return true;
//}
//
//void creatcdulinklist(cdulinklist&L)
//{
//	duLnode* s,*p;
//	p = L;
//	int x = 0;
//	scanf_s("%d",&x);
//	while (x!=9999)
//	{
//		s = (duLnode*)malloc(sizeof(duLnode));
//		s->data = x;
//		p->next = s;
//		s->prior = p;
//		p = s;
//		scanf_s("%d", &x);
//	}
//	p->next = L;
//	L->prior = p;
//}
//void output(cdulinklist L)
//{
//	duLnode* s = L->next;
//	while (s != L)
//	{
//		printf("%d",s->data);
//		s = s->next;
//	}
//}


//合并两个循环双向链表
//cdulinklist merge(cdulinklist& L1,cdulinklist& L2)
//{
//	duLnode* p, * q;
//	p = L1;
//	q = L2;
//	while (p->next!= L1)
//	{
//		p = p->next;
//	}
//	while (q->next!= L2)
//	{
//		q = q->next;
//	}
//	q->next = L1;
//	p->next = L2->next;
//	L2->next->prior = p;
//	free(L2);
//	L1->prior = q;
//	return L1;
//}
//int main(void)
//{
//	//双向链表操作
//	/*dulinklist L;
//	initdulinklist(L);
//	creatdulinklist(L);
//	output(L);*/
//
//
//	//双向循环列表操作
//	cdulinklist L1,L2;
//	initcdunode(L1);
//	initcdunode(L2);
//	creatcdulinklist(L1);
//	creatcdulinklist(L2);
//	cdulinklist L = merge(L1, L2);
//	output(L);
//	return 0;
//}
