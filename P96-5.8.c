#include<stdio.h>
int main()
{
	char ch;
	printf("������һ�������ַ�");
	scanf("%c",&ch);
	if (ch>=49&&ch<=57) 
		printf("����һ�������ַ�"); 
	else
		if (ch>=65&&ch<=90)
			printf("����һ����д��ĸ"); 
		else
			if (ch>=97&&ch<=122)
				printf("����һ��Сд��ĸ"); 
			else
				if (ch==32)
					printf("����һ���ո�") ;
				else
					printf("����һ���ǿո����") ;
	return 0;
}
