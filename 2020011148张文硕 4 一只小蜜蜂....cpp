//����Ҳ��3������ʵ��������ܷ��ֹ��� 
//hdoj ͨ�� 
#include<iostream>
#include <cstring>
using namespace std;
long long int c[500];//����ȫ�ֱ���   ������ú����ݹ���ú���oj����ȥ 
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		memset(c,0,sizeof(c));//�������ʼ����memset����Ч�ʴ���c[500]={0} 
		int a,b,i;
		cin>>a>>b;
		for(i=0;i<=b-a;i++) //ѭ����쳲����� 
		{
			if(i==1||i==0)
			c[i]=1;
			else 
			c[i]=c[i-1]+c[i-2];
		}
		cout<<c[b-a]<<endl;
	}
	return 0; 
}
