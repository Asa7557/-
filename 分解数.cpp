#include<stdio.h>
void fun(int n)
{
	int x;
	if(n!=0)
	{
	    printf("%d ",n%10);
		n=n/10;	    
		fun(n);
	}
}
int main( )
{
    int n;
    printf("����һ������:");    
    scanf("%d",&n);   
	fun(n);
}
