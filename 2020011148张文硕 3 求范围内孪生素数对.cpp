#include<bits/stdc++.h>
using namespace std;
int Fprime(int num)
{
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}//�ж��������� 
int main()
{
	int min,max,sign=0,prime[10000]={0};
	cout<<"���������޺�����" <<endl;
	cin>>min;
	cin>>max;
	for(int j=min;j<=max;j++)
	{
	    if(Fprime(j))
	    {
	    	prime[sign]=j;
	    	sign++;
		}
	}//ɸѡ��Χ������ 
	for(int k=0;k<sign;)
	{
		if(prime[k]+2==prime[k+1])
		{
	    	printf("%d,%d\n",prime[k],prime[k+1]);
		}
		k=k+1;
	}//ѭ��������������������� 
	return 0;
 } 
