#include<stdio.h>
void main()
{
	int n;
	printf("��������������");
	scanf("%d",&n);
	int a=0,b=0,c=0,d=0,e=0,m;
	float f[n];
	for(;a<n;a++)
	{
		printf("�������%d������",a+1);
		scanf("%f",&f[a]);		
	}
	for(b=1;b<n;b++)
	{
     c=b-1;
     for(d=b;d<n;d++)
     if(f[c]>f[d]) c=d;
     m=f[c];
     f[c]=f[b-1];
     f[b-1]=m;
	}
	while(e<n)
	{
		printf("%f  ",f[e]);
		e++;
	}
}
