#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,derta,x1,x2;
	printf("�밴˳������a��b��c�����ö��Ÿ�����(������Ĭ�Ϸ����н�)");
	scanf("%lf��%lf��%lf",&a,&b,&c);
	derta=sqrt(b*b-4*a*c);
	x1=(-b+derta)/(2*a);
	x2=(-b-derta)/(2*a);
	printf("x1=%f,x2=%f",x1,x2);
	return 0;
 } 
