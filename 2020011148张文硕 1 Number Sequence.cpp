/* 
   ���ܣ�������
	��ν����������˳���������ͬ����������292��10301��Ϊ����������дһ�������ж������һ�������Ƿ��ǻ�������
*/
#include<stdio.h>
int judge(int n);//�жϻ���������
int nerverse(int n);//��n��������
int main()
{
	int n,k;
	//��������n
	while(scanf("%d",&n)!=EOF)
	{
		//����һ���ж�n�Ƿ��ǻ�����
		k=judge(n);
		if(k)
		    printf("%d�ǻ�����",n);
		else
		    printf("%d���ǻ�����",n);
		/*����������n��������k��n==k���ǻ�������n!=k���ǻ�����
		k=nerverse(n);
		if(k==n)
		    printf("%d�ǻ�����",n);
		else
		    printf("%d���ǻ�����",n);
		*/ 
	}
	return 0; 
} 
/*��������judge
  �������ܣ��ж�n�Ƿ��ǻ�����
  ��ڲ���������n
  ���ڲ�����1�ǻ�������0���ǻ�����
*/
int judge(int n)
{
	int i,j,count,a[32];//������n��ÿһλ�ֽ⵽������
	count=0;
	while(n)
	{
		a[count]=n%10;
		n=n/10;
		count++;
	 } 
	 //�ж϶�Ӧλ�õ����������Ƿ����
	 //for(j=0;j<count/2&&a[j]==a[count-1-j];j++)
	 for(i=0,j=count-1;i<j;i++,j--)
	 if(a[i]!=a[j]) break;
	 return i>=j;
 } 
 /*��������nerverse
   ���ܣ���һ����������ÿһλ������
   ���룺������n
   �����n������
*/
int nerverse(int n)
{
	int m,k;
	m=0;
	while(n>0)
	{
		k=n%10;
		m=m*10+k;
		n=n/10;
	}
	return m;
 } 
