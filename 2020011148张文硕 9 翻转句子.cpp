//��Ϊ��ǰ˵��������ֱ����������
//������ΰѴ����Ľ����������
//�����Ǹ�����ʦ���ĹԺ��� /͵Ц 
#include<iostream>
#include<cstring>
int main()
{
	char a[1000];
	while(scanf("%[^\n]%*c",a)!=EOF)//������ڰ��gets 
	{
		char b[1000]={0};
		int i=0,rank=0,len=strlen(a),flag=strlen(a);
		for(i=len-1;i>=0;i--)//�±�Ӻ���ǰ 
		{
			if(a[i]==' ')//ÿ���жϳ��ո�ͰѺ���ĵ��ʸ���b 
			{
				for(int j=i+1;j<flag;j++) 
				{
					b[rank++]=a[j];
				}
				b[rank++]=' ';//ÿ�����ʺ�ӿո� 
				flag=i;
			}
		}
		int temp=0;
		if(a[0]!=' ') //�����׸��ַ����ǿո������� 
		for(;rank<len;rank++)
		b[rank]=a[temp++];
		puts(b);
	}
	return 0;
}
