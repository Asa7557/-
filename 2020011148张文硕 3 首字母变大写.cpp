#include<stdio.h>
#include<cstring>
int main()
{
	char a[100];
	while(gets(a))//�ĵ�ĩβ���� 
	{
		a[0]=a[0]+'A'-'a';//��һ����ĸ��д 
		for(int i=1;i<strlen(a);i++)//�ո���׸���Ϊ�ո����ĸ��д 
		{
			if(a[i]==' '&&a[i+1]!=' ') a[i+1]=a[i+1]+'A'-'a';
		}
		puts(a);
	}
	return 0;
}
