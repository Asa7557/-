#include<stdio.h>
#include<cstring>
int main()
{
	char a[5],b[80],c;
	scanf("%c",&c);
    while(c!='#')//������Ҫ�ж�ɶʱ����ѭ������ 
    {
    	gets(a);
    	gets(b);
    	for(int r=strlen(a);r>0;r--)//�ⲽ��Ϊ�˰Ѹո������жϵ��ַ�Ҳ�ŵ� a �� 
    	{
    		a[r]=a[r-1];
		}
		a[0]=c;
	    for(int i=0;i<strlen(a);i++)//ѭ���Ƚ� 
	    {
	    	int count=0;
    		for(int j=0;j<strlen(b);j++)
    		{
    			if(b[j]==a[i]) count++;
    		}
    		printf("%c %d\n",a[i],count);//����ֱ����� 
    	}
    	scanf("%c",&c);
    }
	return 0;
}
