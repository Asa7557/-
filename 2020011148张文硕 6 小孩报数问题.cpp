#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
typedef struct LIST
{
	char a[16];
	struct LIST *next;
}*plist;
void create(plist &head,int n)//������ͷβ�巨ѭ������ 
{ 
	head=(plist)malloc(sizeof(LIST));//head�Ǽٵ�����ͷ 
	/*fgets(head->a,16,stdin);//��fgets��ֹԽ�� */
	cin>>head->a;//��������������û�пո���cin������ 
	plist temp=head,jie;
	while(--n)//��Ϊ�ٵ�����ͷ�Ѿ�����һ�������ˣ�����ѭ��������һ 
	{
		jie=(plist)malloc(sizeof(LIST));
		/*fgets(jie->a,16,stdin);*/
		cin>>jie->a;
		temp->next=jie;
		jie->next=head; //ѭ�� 
		temp=jie;
	}
}
int main()
{
	int n,w,s;
	scanf("%d%*c",&n); 
	plist head,output;
	create(head,n);
	scanf("%d,%d",&w,&s);//���Ÿ��� 
	output=head;
	for(int i=0;i<w-1;i++)//��ѭ������Ӧ�Ŀ�ʼ������ w 
	{
		output=output->next;
	}
	while(1)
	{
		int order=1;
		while(1)
		{
			plist preout=output;
			output=output->next;
			order++;
			if(order==s)//�����s���� 
			{
				n--;//ÿ���һ�������ȼ�һ 
				cout<<output->a<<endl;
				output=output->next;
				preout->next=output;
				break;	
			}
		}
		if(n==0) break;
	}
	plist remain=head;
	/*while(n--)//���ʣ�µ�С�� s ��
	{
		cout<<(output->a)<<endl;
		output=output->next;
	}*/
	return 0;
}
