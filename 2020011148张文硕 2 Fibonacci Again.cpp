/*��������ľ��鱾����ֱ�Ӵ�ӡǰ500��Ԫ�ض�3����Ľ��
 �������˱�������ڣ����³����ǰ�������ֱ�Ӵ�ӡ�Ľ��*/
 //ע����������ں���oj�Ϲ��� 
#include<stdio.h>
int main()  
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
	if(n<4&&n!=2) printf("no\n");
	else 
	{
		if((n-2)%4==0) printf("yes\n");
		else printf("no\n");
	}
    }
	return 0;
}

