#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct List{
	int data;
	struct List *next;
}*plist;
int main()
{
	int n,m;
	cin>>n;
	plist L,jie,r;
	L=(plist)malloc(sizeof(List));
	L->next=NULL;//����ͷ�ڵ� 
	r=L;//β�巨 
	for(int i=0;i<n;i++)
	{
		jie=(plist)malloc(sizeof(List));
		cin>>jie->data;
		r->next=jie;
		jie->next=NULL;
		r=jie;
	}
	cin>>m;
	plist temp=L->next,pretemp=L;//ÿ�α���ȽϽ���ǰһ����� 
	while(temp!=NULL)
	{
		if(temp->data==m)
		{
			pretemp->next=temp->next;
			temp->next=NULL;
		 } 
		 pretemp=temp;
		 temp=temp->next;//���� 
	}
	plist output=L->next;
	for(int k=0;k<n-1;k++)//��� 
	{
		cout<<output->data<<' ';
		output=output->next;
	}
	return 0;
}
