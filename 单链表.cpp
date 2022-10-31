//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//#include<stdbool.h>
//typedef int elemtype;
////链表
//typedef struct Node
//{
//	elemtype data;
//	struct Node* next;
//}Lnode,*linklist;
//
//
//
////初始化一个单链表（带头结点）
//bool initlist(linklist &L)
//{
//	L = (Lnode*)malloc(sizeof(Lnode));
//	if (L == NULL)
//	{
//		return false;
//	}
//	L->next = NULL;
//	return true;
//}
////按位查找
//Lnode* search(linklist L, int i)
//{
//	if (i < 1)
//	{
//		return NULL;
//	}
//	Lnode* p;
//	int j = 0;
//	p = L;
//	while (p != NULL && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//
//
//
//
////单链表的建立
////尾插法
//linklist found(linklist &L,elemtype a[])
//{
//	int x = 0;
//	Lnode* s, * r = L;
//	//scanf_s("%d",&x);
//	/*while (x != 9999)
//	{
//		s = (Lnode*)malloc(sizeof(Lnode));
//		s->data = x;
//		r->next = s;
//		r = s;
//		scanf_s("%d", &x);
//	}*/
//	for (int i = 0; i <7; i++)
//	{
//		s = (Lnode*)malloc(sizeof(Lnode));
//		s->data = a[i];
//		r->next = s;
//		r = s;
//	}
//	r->next = NULL;
//	return L;
//}
////前插法
//linklist found_(linklist& L,int a[])
//{
//	//int x = 0;
//	//scanf_s("%d", &x);
//	//while (x != 9999)
//	//{
//	//	Lnode*s = (Lnode*)malloc(sizeof(Lnode));
//	//	s->data = x;
//	//	s->next = L->next;
//	//	L->next = s;
//	//	scanf_s("%d", &x);
//	//}
//	for (int i = 0; i < 7; i++)
//	{
//		Lnode* s = (Lnode*)malloc(sizeof(Lnode));
//		s->data = a[i];
//		s->next = L->next;
//		L->next = s;
//	}
//	return L;
//	
//}
////打印
//
//void print(linklist L)
//{
//	Lnode* p = L->next;
//	while (p != NULL)
//	{
//		printf("%d  ",p->data);
//		p = p->next;
//	}
//}
//
//
//
//
////按位序插入
//bool listinsert(linklist&L,int i,elemtype e)
//{
//	Lnode*p = search(L,i);
//	if (p == NULL)
//	{
//		return false;
//	}
//	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
//
//
//
//
////后插操作
//bool lateinsertlist(Lnode* p, elemtype e)
//{
//	if (p == NULL)
//	{
//		return false;
//	}
//	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
//	if (s == NULL)
//	{
//		return false;
//	}
//	
//		s->data = e;
//		s->next = p->next;
//		p->next = s;
//	return true;
//}
//
////前插
//bool primerinsertlist(Lnode* p, elemtype e)
//{
//	if (p == NULL)
//	{
//		return false;
//	}
//	Lnode* s = (Lnode*)malloc(sizeof(Lnode));
//	if (s == NULL)
//	{
//		return false;
//	}
//	s->next = p->next;
//	p->next = s;
//	s->data = p->data;
//	p->data = e;
//	return true;
//}
//
//
//
//
//
////按位序删除
//bool dellist(linklist& L, int i,elemtype &e)
//{
//	Lnode *p = search(L,i);
//	if (p == NULL)
//	{
//		return false;
//	}
//	if (p->next == NULL)
//	{
//		return false;
//	}
//
//	Lnode* q = p->next;
//	e = q->data;
//	p->next = q->next;
//	free(q);
//	return true;
//}
//
//
//
//
//
//
////删除指定结点
//bool delnode(Lnode* p)
//{
//	if (p == NULL)
//		return false;
//	Lnode* q = p->next;
//	p->data = p->next->data;
//	p->next = q->next;
//	free(q);
//	return true;
//}
//
//
//
//
//
////指定数查找
//Lnode* num_search(linklist L,elemtype e)
//{
//	Lnode* p = L->next;
//	while (p != NULL && p->data != e)
//	{
//		p = p->next;
//	}
//	return p;
//}
//
//
//
//
//
//
//int main(void)
//{
//	elemtype a[7] = { 2,6,8,9,11,15,20 };
//	linklist L;
//	initlist(L);
//	L = found(L,a);
//	/*elemtype a;
//	scanf_s("%d",&a);
//	listinsert(L,3,a);*/
//	print(L);
//	return 0;
//}