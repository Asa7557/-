/* n    A(n)
   1	1
   2	3
   3	8
   4	20
   5	48
   6	112
   7	256
   8	576
   ...
   A(n)=A(n-1)*2+pow(2,n-1)*/
//hdoj ���� 
#include<stdio.h>
#include<string.h>
int mypow(int x)//pow ��������ѭ����û�� 
{
	int sq=1;
	for(int g=1;g<x;g++)
	{
		sq=sq*2;
	}
	return sq;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)//��ѭ������ѭ������ 
	{
		int n;
		int a[22];
		memset(a,0,sizeof(a));//��ʼ�� 
		scanf("%d",&n);
		for(int i=1;i<=n;i++)//���ƹ�ʽ 
		{
			a[i]=2*a[i-1]+mypow(i-1);
		}
		printf("%d\n",a[n]);
	}
	return 0;
}
