#include<stdio.h>
int calculate(int x)
{
	int memory,temp;//memory���ڴ�����һ�ε�xҲ���ǵ�ǰ¥�� 
	if(x>memory)  
	{
		temp=6*(x-memory)+5;
		memory=x;
		return temp;
	}
	if(x<memory) 
	{
		temp=4*(memory-x)+5;
		memory=x;
		return temp;
	}
	if(x==memory)
	{
		memory=x;
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n)//��ÿ�е�һ������ 0 ʱ���� 
	{	
	    int m,sum=0;
	    while(n--)//����ÿ����������ݸ��� 
	    {
		    scanf("%d",&m);
		    if(sum==0)//��һ�γ�ʼ¥��Ϊ0 
		    {
		    	calculate(m);
				//���ú�������Ϊ�˰�¥��(m)���ݸ���������memory��ס���¥���´��� 
		    	sum=6*m+5;
			}
		    else sum=sum+calculate(m);
			//�Եڶ��ο�ʼÿ�����ú���������������������ʱ�� 
	    }
	    printf("%d\n",sum);
	    scanf("%d",&n);
	}
	return 0;
}
