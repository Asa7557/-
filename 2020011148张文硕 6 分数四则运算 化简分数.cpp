#include<stdio.h>
int simplify(int m,int n)//������������ 
{
	if(m==n) printf("1\n");
	else
	{
	    int temp=1,a=m,b=n;
	    while(temp)
	    {
	    	temp=a%b;
	    	a=b;
	    	b=temp;
		}
		printf("%d/%d\n",m/a,n/a);
	}	
}
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)//������ѭ�� 
	{
		int a,b,c,d,ra,rb;
	    char x;
	    scanf("%d %*c %d %c %d %*c %d",&a,&b,&x,&c,&d);
		//%*c��ʾ�����У�����һ���ַ�
		switch(x)//switch case ���ֱ�����+ - * /�� 
		{
	        case '+':
	        {	
	    	    rb=b*d;
	    	    ra=a*d+b*c;
                simplify(ra,rb); 
                break;
            }
            case '-':
            {
            	ra=a*d-b*c;
            	rb=b*d;
            	simplify(ra,rb);
            	break;
			}
			case '*':
			{
				ra=a*c;
				rb=b*d;
				simplify(ra,rb);
				break;
			}
			case '/':
			{
				ra=a*d;
				rb=b*c;
				simplify(ra,rb);
				break;
			}
	    }
	}
	return 0;
}
