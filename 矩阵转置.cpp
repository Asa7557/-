#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("������������� ��");
	scanf("%d %d",&m,&n); 
	int a[m][n],b[n][m];
	printf("����������"); 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%2d ",b[i][j]=a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
