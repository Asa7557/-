#include<stdio.h>
int main()
{
	int x=0,y=0;
	double a=1,s1=0,s2=0,s=0;
	printf("���������ݣ����ݼ��ÿո����������0��ʾ�������ݽ���");
	while(a)
	{
		scanf("%lf",&a);
		if(a>0)
		{
			x++;
			s1=s1+a;
		}
	    if(a<0)
		{
			y++;
			s2=s2+a;
		}
	}
	s=(s1+s2)/(x+y);
	printf("������%d��    ���ǵĺ���%f\n",x,s1);
	printf("������%d��    ���ǵĺ���%f\n",y,s2);
	printf("���ǵ�ƽ������%f\n",s);
	return 0;
}



