#include<stdio.h>
int main()
{
	int n,m,t,x,y,i,j,k;
	scanf("%d",&n);
	m=n;
	for(i=1;i<9;i++)
	{
		x=0,y=0;
		t=m;
		while(t!=0)
		{
			x=10*x+t%10;
			t=t/10;
		}
		y=m+x;
		m=y;
		j=y;
		k=0;
		while(j!=0)
		{
			k=10*k+j%10;
			j=j/10;
		}
		if(y==k)
		{
			printf("%d�ھ���%d�����Ϊ������%d",n,i,y);
			break;
		}
	}
	if(i==9)
	{
		printf("%d��8�����޷���Ϊ������",n);
	}
	return 0;
}


