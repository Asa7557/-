#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)//������ѭ�� 
	{
		int a,b,c,asum=0,bsum=0,csum=0;
		a=n,b=n,c=n;
		while(a)//10����
		{
			asum=asum+a%10;
			a=a/10;
		}
		while(b)//12���� 
		{
			bsum=bsum+b%12;
			b=b/12;
		}
		if(asum==bsum)//�����һ������������16���Ƶģ���С���Ӷ� 
		{
			while(c)
			{
				csum=csum+c%16;
				c=c/16;
			}
			if(csum==bsum)
			{
				printf("%d is a Sky Number.\n",n);
			}
			else printf("%d is not a Sky Number.\n",n);
		}
		else printf("%d is not a Sky Number.\n",n);
		//printf("%d %d %d ",asum,bsum,csum);  �������� 
	}
	return 0; 
}
