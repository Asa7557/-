#include<stdio.h>
int main()
{
	double n,b;
	while(scanf("%lf",&n)&&n!=0)
    {
    int store1[100]={0},i;
	long long int a;
	a=n;
	b=n-a;//����������С�����ַ��� 
	for(i=0;a;i++)//������������2���� 
	{
		if(a%2) store1[i]=1;
		a=a/2;
	}
	while(i--)
	{
		printf("%d",store1[i]);
	}
	printf(".");
	for(int j=0;j<6;j++)//��ౣ��6λС�� 
	{
		if(b*2>=1) 
		{
			printf("1");
			b=b*2-1;
		}
		else 
		{
			b=b*2;
			printf("0");
		}
	 } 
	printf("\n");
    }
    return 0;
}
