#include<stdio.h>
#include<string.h>
int main()
{
	int m,n,i,j,t,k;
	scanf("%d %d %d",&m,&t,&n);  
	int a[20][20],b[20][20],c[20][20];
	for(i=1;i<=m;i++)//���� 
	{
		for(j=1;j<=t;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=t;i++)//���� 
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
    for(i=1;i<=m;i++)//ѭ����� 
    {
    	for(j=1;j<=n;j++)
    	{
    		for(k=1;k<=t;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];//����ۼ���Ϊ��һ������ĵ�i j��Ԫ�� 
		}
	}
    for(i=1;i<=m;i++)//��� 
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");//���� 
	}
	return 0;
}
    
    
