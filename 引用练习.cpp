#include<stdio.h>
int swap1(int &x,int &y)//���� 
{
	x=x+y;
	y=x-y;
	x=x-y;
}//���������������� x y 
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
    swap1(a,b);
    printf("%d %d",a,b);
}

