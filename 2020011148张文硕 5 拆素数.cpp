#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	while(x)//x=0���� 
	{
		int count=0; 
		int prime[x]={0},RealPrime[10000]={0},sign=0;//�շ�ʽ���� 
		for(int j=2;j<=10000;j++)//����ɸ��
		{
			if(prime[j]) continue;
	    	for(int k=j;k*j<10000;k++)
		    {
		    	prime[j*k] =1;
	    	}
		}
		prime[0]=prime[1]=1;
		for(int i=0;i<x;i++)//���±��Ϊ�����е�Ԫ�� 
		{
			if(!prime[i])
			{
				RealPrime[sign]=i;
				sign++;
			}
		}
		for(int p=0;p<=sign/2;p++)//ͳ���ܲ�ɵĸ��� 
		{
			for(int q=sign-1;q>=sign/2;q--)
			{
				if(RealPrime[p]+RealPrime[q]==x) 
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
		scanf("%d",&x);
	}
	return 0;
 } 
