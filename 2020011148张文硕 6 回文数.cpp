#include<stdio.h>
int main()
{
	int m;
	while(scanf("%d",&m)!=EOF)//����δ˵��ʱ����Ĭ���ĵ�ĩβ���� 
	{
		int n=m,nixu=0;
		while(n)
		{
			nixu=nixu*10+n%10;
			n=n/10;
		 } 
		 if(nixu==m) printf("%d�ǻ�����\n",m);
		 else printf("%d���ǻ�����\n",m);
	}
	return 0;
 } 
