#include<stdio.h>
#include<string.h>
int main()
{
	char a[81],b[81];
	while(scanf("%[^\n]%*c",a)!=EOF&&scanf("%[^\n]%*c",b)!=EOF)//�ĵ�ĩβ���� 
	{
	int x=strlen(a),y=strlen(b);
	for(int i=0;i<x;)
	{
		if(a[i]>='a'&&a[i]<='z') a[i]=a[i]-32;//����ĸ����ɴ�д 
		if(a[i]==' '||a[i]=='	')//ɾ��tab�Ϳո� 
		{
			for(int j=i;j<x;j++)
			{
				a[j]=a[j+1];
			}
			x--;
			continue;//������Ϊ�˴������ո���������� 
		}
		i++;
	}
	a[x]=0;//�����һ����ĸ����Ͻ������� 
	for(int i=0;i<y;)
	{
		if(b[i]>='a'&&b[i]<='z') b[i]=b[i]-32;
		if(b[i]==' '||b[i]=='	')
		{
			for(int j=i;j<y;j++)
			{
				b[j]=b[j+1];
			}
			y--;
			continue;
		}
		i++;
	}
	b[y]=0;
    if(strcmp(a,b)) printf("No\n");
    else printf("Yes\n");
    }
    return 0;
}
