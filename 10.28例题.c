#include<stdio.h>
int main()
{
	int a,b,x,y,n,i;
	printf("�������������������ö��Ÿ���");
    scanf("%d,%d",&a,&b);
    x=a>b?a:b;
    y=a<b?a:b;
    while(y)
    {
    n=x%y,x=y,y=n;
    }
    i=a*b/x;
    printf("���ǵ���С��������%d",i);
    return 0;
}
