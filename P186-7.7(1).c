#include<stdio.h>
int Gcd(int a,int b)
{
	int t;
	t=a<=b?a:b;
	for(;t>=0;t--)
	{
		if(a%t==0&&b%t==0)
		{
		printf("���ǵ����Լ��Ϊ%d",t);
		break;
	    }
	}
}
int main()
{
	int a,b,t;
	begin:printf("����������������");
	scanf("%d %d",&a,&b);
	if(a>0&&b>0)
	t=Gcd(a,b);
	else
     goto begin;
    return 0;
}
