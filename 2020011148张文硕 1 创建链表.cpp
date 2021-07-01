/*����������ǰ���ppt�ϵķ�ʽ������һ��Ȼ���ϸ�ڵĵط��Ķ���һ��*/ 
#include<stdio.h>
#include<stdlib.h>
typedef struct LNode
{
	int data;
   	struct LNode *next;
}LNode,*Linklist;
void create_LIFO(Linklist &L, int a[], int n)  //ͷ�巨�������򽨱�
{	
	int i;
	Linklist p;
	L = (Linklist)malloc(sizeof (LNode));
	L-> next = NULL;    // �Ƚ���һ����ͷ���Ŀ�����
	for (i = 0; i < n; i++)
	{   
	    p = (Linklist) malloc (sizeof (LNode));   // ÿ������һ���½��
		p -> data = a[i];
		p -> next = L -> next; 
		L -> next = p;   // ���뵽��ͷ 
	}
}
void create_FIFO(Linklist &L, int a[], int n) //β�巨�����򽨱�
{
	Linklist r, p;
	int i;	
	L = (Linklist)malloc(sizeof(LNode));
    //�Ƚ���һ����ͷ���ĵ�����
	r = L;                           //rΪ��βԪ��ָ��
	for(i = 0; i < n; i++)
	{
		p = (Linklist)malloc(sizeof(LNode));     //�����½��
		p -> data = a[i];         //Ԫ��ֵ
		p -> next = NULL;
		r -> next = p; //���뵽��β
		r = p;  //rָ�����
 	}
}
void printLinklist(Linklist L)
{
	LNode *p;
	p = L->next;
	while (p!=NULL)
	{
		printf("%4d",p->data);
		p = p->next;
	}
	printf("\n");
}
void DistroyLinklist(Linklist &L)
{
	Linklist p;
	p=L;
	while(L != NULL)
	{
		L = L -> next;   //����Lָ��
		free(p);         //�ͷŵ�ǰ���
		p = L;       //����pָ��
	}
}
int main()
{
    Linklist L1, L2;
	int a[100], x, n;	
	n = 0;
	while (scanf("%d", &x)!=EOF)
		a[n++] = x;			
	create_LIFO(L1, a, n);   //ͷ�巨����
	printLinklist(L1);
	create_FIFO(L2, a, n);    //β�巨����
	printLinklist(L2);
	DistroyLinklist(L1);
	DistroyLinklist(L2);
	return 0;
}

