/* 
�����֪��
  ����  �߷� 
    1    0
    2    1
    3    2
    4    3
    5    5
    6    8
    7    13
    ....    
    ע������ͨ���˺���oj*/ 
#include<stdio.h>
int F(int x)//쳲���������
{	
	if(x==1) return 1;
    else 
    {
    	if (x==2) return 2;
    	else return F(x-1)+F(x-2);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)//ѭ��n�� 
	{
		int m,sum=1;
		scanf("%d",&m);
		printf("%d\n",F(m-1));
	} 
	 return 0;
}
