#include<stdio.h>
int fac(int n)
{
	long long y;
	if(n==0) y=0;
	else{
		y=n+fac(n-1);
	}
	return y;
}
int main()
{
	int n;
	long long y;
	printf("������һ������"); 
	scanf("%d",&n);
	y=fac(n);
	printf("%lld",y);
}
