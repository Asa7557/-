#include<stdio.h>
#include<math.h>
int turn10(int b,int k)//���������Ƶ���ת��Ϊ10���� 
{
	if(b<k) return b;
	else
	{
		int a[32]={0},g=0,turn=0;
		/*int turn=b%10;
		for(int g=1;b/10;g++)
		{
			b=b/10;
			turn=turn+(b%10)*pow(k,g);
		}*/  //�� pow �������� 
		while(b)
		{
			a[g]=b%10;
			b=b/10;
			g++;
		}
		while(g+1)
		{
			turn=turn*k+a[g];
			g--;
		}
    	return turn;
	}
}
int F(int w,int xi)//�Ƚ����ݵ�����һλ�� i�����ƣ��Ĵ�С��ϵ 
{
	while(w)
	{
		if(w%10>=xi) return 0;
		w=w/10;
	}
	return 1;
}
int main()
{
	int p,q,r;
	scanf("%d %d %d",&p,&q,&r);
    while(p||q||r)//����0 0 0 ���� �� 
    {
    	int result=0,i;
    	if(r==0) printf("2\n");//��ȥ����  0 * 123 = 0 ����� �� 
    	else
    	{
    		for(i=2;i<=16;i++)//ѭ�����Դ�2��16���ƣ� 
            { 
                if(F(r,i)==0)  continue;
                if(F(q,i)==0)  continue;
                if(F(p,i)==0)  continue;
	//���3��������ĳ������ĳһλ�� i�����ƣ����򲻷�����һ�������ֱ�ʾ�淶����ֱ�������� 
	//��������ô֪���ģ��ʾ���һ���ͷ����һ��ѸΣ� 
    		    result=turn10(p,i)*turn10(q,i);
    		    if(result==turn10(r,i))
    		    {
    		    	printf("%d\n",i);
    		    	break;
				}
    		}
    		if(i==17) printf("0\n");//���н��ƶ������ϣ���� 0�� 
		}
		scanf("%d %d %d",&p,&q,&r);
	}
	return 0;
}
