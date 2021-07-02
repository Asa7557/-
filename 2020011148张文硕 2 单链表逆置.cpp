#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}*plist;//����plist������Ŵ�����һ��ָ��ṹ���ָ�� 
void create(plist &L,int b[],int m)//β�巨�������� 
{
	plist jie,temp;
	L=(plist)malloc(sizeof(LNode));
	L->next=NULL;
	temp=L;
	for(int i=0;i<m;i++)
	{
		jie=(plist)malloc(sizeof(LNode));
		jie->data=b[i];
		temp->next=jie;
		jie->next=NULL;
		temp=jie;
	}
}
void turn(plist &L,int n)//�������ٴ���һ�� 
{
	LNode *p,*temp;
	p=L->next;
	L->next=NULL;
    while (p!=NULL)
	{
        temp=p->next;
        p->next=L ->next;
        L->next=p;
        p=temp;
    }
}
void Output(plist L)//��� 
{
	plist p;
	p=L->next;
	while(p!=NULL)
	{
		p=p->next;
		printf("%3d",p->data);
	}
}
void distory(plist &L)//�ͷſռ� 
{
	plist p;
	p=L;
	while(L!=NULL)
	{
		L=L->next;
		free(p);
		p=L;
	}
}
int main()
{
	plist L;
	int a[101],n=0;
	while(scanf("%d",&a[n++])!=EOF);//��Ҫ������ 
	create(L,a,n);
	turn(L,n);
	Output(L);
	distory(L);
	return 0;
}
