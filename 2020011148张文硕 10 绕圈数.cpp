#include<stdio.h>
int main()
{
	int m,i;
	scanf("%d",&m);
	while(m)//������ѭ��������m=0ʱ���� 
	{
		int data[10000]={0},x,flag=1;
		data[0]=m;
		for(i=1;i<10000&&flag;i++)
		{
			x=data[i-1];
			while(x)//��ÿһλ��ƽ������� 
			{
				data[i]=data[i]+(x%10)*(x%10);
				x=x/10;
			}
			for(int j=0;j<i;j++)//�Ƚ��Ƿ���ѭ����Ԫ�س��� 
			{
				if(data[i]==data[j])
				{
					flag=0;//�����־�������ڷ�������ʱ����ѭ�� 
					break;
				}
			}
		}
		for(int k=0;k<i;k++)//��������д� 0 ���ո��������Ǹ� i �����б�������� 
		{
			printf("%d ",data[k]);
		}
		printf("\n");
		scanf("%d",&m);
	}
	return 0; 
}
