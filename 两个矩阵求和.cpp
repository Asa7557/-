#include<stdio.h>
#define N 100
/*int sum(int a[][N],int b[][N],int m,int n)
{
	int c[m][n],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	return c
}*/
int main()
{
	int m,n,i,j;
	printf("������������� ��");
	scanf("%d %d",&m,&n); 
	int a[m][n],b[m][n],c[m][n];
	printf("�������һ����������"); 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	printf("������ڶ�����������"); 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%2d ",c[i][j]=a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

