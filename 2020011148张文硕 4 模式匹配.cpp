#include<stdio.h>
#include<cstring>
int main()
{
	char a[1000],b[1000];
	while(gets(a)!=NULL)//Ĭ���ĵ�ĩβ���� 
	{
		int count=0,flag=1,begin,i,j;
		gets(b);
		for(i=0;i<strlen(a);i++)
		{
			for(j=0;j<strlen(b);j++)//ѭ���Ƚ� 
			{
				if(b[j]==a[j+i]) ;
				else break;
			}
			if(j==strlen(b)&&flag)//���ѭ���Ƚϵ����δ��break�������Ӵ����� 
			{
				printf("%d,",i+1);
			}
			if(j==strlen(b))//flag������ǵ�һ�γ����Ӵ���λ�� 
			{
                flag=0;
				count++;
			}
		}
		if(flag==1) printf("-1,");//flag����������Ӵ��Ƿ���ֹ� 
		printf("%d\n",count);
	}
}
