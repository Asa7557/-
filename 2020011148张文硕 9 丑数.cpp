#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==1)//�޳� n Ϊ 1 ����� 
	{
		printf("False");
	}
	else
	{
	while(n%2==0)
	{
		n=n/2;
	}
	while(n%3==0)
	{
	    n=n/3;
	}
	while(n%5==0)
	{
	    n=n/5;
	}//3��ѭ���������� 2 3 5���� �� 
	if(n==1)//������Ӻ��������� 1 ��Ϊ���� �� 
	{
		printf("True");
	}
	else//����1˵�� n �����������ӣ����ǳ����� 
	{
		printf("False");
	}
    }
	return 0;
}
