//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//#include<stdbool.h>
//typedef int elemtype;
////����
//typedef struct Node
//{
//	elemtype data;
//	struct Node* next;
//}Lnode,*linklist;
//
//
//
////��ʼ��һ����������ͷ��㣩
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
////��λ����
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
////������Ľ���
////β�巨
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
////ǰ�巨
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
////��ӡ
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
////��λ�����
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
////������
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
////ǰ��
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
////��λ��ɾ��
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
////ɾ��ָ�����
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
////ָ��������
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