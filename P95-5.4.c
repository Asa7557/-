#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,rate;
	int n;
	printf("�����뱾�������һ���ո�������������(�������ֻ��Ϊ1��2��3��5��8�е�һ��)");
	scanf("%lf %d",&x,&n);
	switch (n)
	{
		case 1:rate=0.0225;
		break;
		case 2:rate=0.0243;
		break;
		case 3:rate=0.027;
		break;
		case 5:rate=0.028; 
		break;
		case 8:rate=0.03;
		break;
	}
	y=x*rate*n+x;//  ���ݰٶ������Ľ�����ڴ��Ƹ���������ʽ����y=x*pow(1+rate,n) 
	printf("����=%f ",x);
	printf("����=%d ",n);
	printf("�ϼ�=%f ",y);
	return 0;
}
