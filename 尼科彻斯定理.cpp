/*������һ������a,����a����������ż��������(a��a-a+1)��ȻΪ������
����һ���Ȳ����У����е�����Ϊ(a��a-a+1),�Ȳ����еĲ�ֵΪ2(��������)����ǰa��ĺ�Ϊ��
a��((a��a-a+1))+2��a(a-1)/2
=a��a��a-a��a+a+a��a-a
=a��a��a
���������֤�ϡ�*/
#include<stdio.h>
int main()
{
	int n,m,a;
	scanf("%d",&n);
	m=n*n*n;
	printf("%d*%d*%d=%d=",n,n,n,m);
	a=n*n-n+1;
    for(int i;i<n;i++)
    {
    	if(i!=n-1){
		    printf("%d+",a+2*i);}
		else{
			printf("%d",a+2*i);
		}
	}
	return 0;
}
