#include<stdio.h>
#include<string.h>
int trans(char x[9])//ʱ��ת��Ϊ���� 
{
	int h,m,s,sum;
	h=(x[0]-'0')*10+(x[1]-'0');
	m=(x[3]-'0')*10+(x[4]-'0');
	s=(x[6]-'0')*10+(x[7]-'0');
	sum=h*3600+m*60+s;
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)//��ѭ�� 
	{
		int m;
		scanf("%d",&m);
		char a[16],b[9],c[9],zao[16],wan[16];
		int min=86400,max=0;
		while(m--)//ѭ���Ƚ���һ����������һ�еĴ�С�����������ĺ���� 
		{
			scanf("%s%s%s",a,b,c);//������� scanf %s �����ո���������� 
			if(trans(b)<min){ 
				strcpy(zao,a);
				min=trans(b);
			}
			if(trans(c)>max){
				strcpy(wan,a);
				max=trans(c);
			}
	    }
	    printf("%s %s\n",zao,wan);
	    
	}
}
