#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct LIST{//˫������ 
	int data;
	struct LIST *next;
	struct LIST *prev;
}*plist;
int main()
{
	int n=100,end=0,preend=0,di50=0;
	plist head,temp,jie,tail;
	head=(plist)malloc(sizeof(LIST));
	tail=(plist)malloc(sizeof(LIST));
	tail->next=NULL;
    head->prev=NULL;
	temp=head;//β�巨 
	for(int i=1;i<=n;i++) 
	{
		jie=(plist)malloc(sizeof(LIST));
		jie->data=i;
		temp->next=jie;
		jie->prev=temp;
		jie->next=tail;
		temp=jie;
		tail->prev=temp;
	}
	plist outline=head->next;
	while(n>2)
	{
		for(int j=1;outline->next!=NULL;j++)
		{
			if(j%3==0)//ѭ����������3�ı����ͳ���һ�� 
			{
				if(n==51) di50=outline->data;
				outline->prev->next=outline->next;
				outline->next->prev=outline->prev;
				n--;
			}
			/*cout<<outline->data<<' '<<n<<endl;*/
			//������м���Ե�ʱ��۲�ÿһ��ѭ���Ľ�� 
			outline=outline->next;
		}
		outline=outline->prev;
		for(int k=1;outline->prev!=NULL;k++)//ÿ�ε�������һ�� 
		{
			if(k%3==0)
			{
				if(n==51) di50=outline->data;
				outline->next->prev=outline->prev;
				outline->prev->next=outline->next;
				n--;
			}
			/*cout<<outline->data<<' '<<n<<endl;*/
			//������м���Ե�ʱ��۲�ÿһ��ѭ���Ľ��
			outline=outline->prev;
		}
		outline=outline->next;
	}
	cout<<outline->data<<' '<<outline->next->data<<endl;
	system("color 0e");//�ı佻������������ɫ ��stdlib�� 
	cout<<di50;
	return 0;
}
