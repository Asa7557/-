#include <stdio.h>
int main ()
{
	int h,m,r;
	char a[25][15]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven",
				"twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
				"twenty","twenty one","twenty two","twenty three","twenty four"};//1-24�ı�� 
	scanf("%d %d",&h,&m);
	if(m==0)//������� 
	{
		printf("%s o'clock",a[h]);
	}
	else if(m<=20)
	{
		printf("%s %s",a[h],a[m]);//С��20 
	}
	else if(m<=30)
	{
		r=m-20;
		printf("%s twenty %s",a[h],a[r]);//С��30 
	}
	else if(m<=40)
	{
		r=m-30;
		printf("%s thirty %s",a[h],a[r]);//С��40 
	}
	else if(m<=50)
	{
		r=m-40;
		printf("%s forty %s",a[h],a[r]);//С��50 
	}
	else
	{
		r=m-50;
		printf("%s fifty %s",a[h],a[r]);//С��60 
	}
	return 0;
} 
