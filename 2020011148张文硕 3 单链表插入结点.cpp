#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}*plist;//����plist������Ŵ�����һ��ָ��ṹ���ָ�� 
int main()
{
	plist L,jie,temp;
	L=(plist)malloc(sizeof(LNode));
	L->next=NULL;
	temp=L;
	int n,m,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)//β�巨���� 
	{
		jie=(plist)malloc(sizeof(LNode));
		scanf("%d",&jie->data);
		jie->next=NULL;
		temp->next=jie;
		temp=jie;
	}
	scanf("%d",&m);
	plist compare=L->next,precompare=L,ChaRu;
	ChaRu=(plist)malloc(sizeof(LNode));
	ChaRu->data=m;
	//��ÿ�����ڱȽϵĽ�����һ������� precompare ������ں�������½�� 
	for( k=0;k<n;k++)
	{
		if(compare->data>=m)
		{
			ChaRu->next=compare;//�����ұ� 
			precompare->next=ChaRu;//������� 
			break;
		}
        precompare=compare;//ÿ�α���compare����ǰһ����� 
		compare=compare->next;
	}
	if(k==n)//�����Ԫ�ر�����������Ԫ�ض�����ֱ�Ӳ嵽��β 
	{
		precompare->next=ChaRu;
		ChaRu->next=NULL;
	}
	plist output=L->next;//��� 
	for(int j=0;j<n+1;j++)
	{
		printf("%3d",output->data);
		output=output->next;
	}
	return 0; 
}
