#include<stdio.h>
int main()
{
char ch;
printf("������һ��Сд��ĸ");
scanf("%c",&ch);
if(ch>=97&&ch<=122)
{
ch=ch-32;
printf("%c",ch);
}
else
printf("��������������������ĸ��رմ�д����");
return 0;
}

