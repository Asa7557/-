#include<stdio.h>
char output(int x)//���ʱ���ַ�����ת�� 
{
	switch(x)
	{
		case 0:return '0';break;
		case 1:return '1';break;
		case 2:return '2';break;
		case 3:return '3';break;
		case 4:return '4';break;
		case 5:return '5';break;
		case 6:return '6';break;
		case 7:return '7';break;
		case 8:return '8';break;
		case 9:return '9';break;
		case 10:return 'A';break;
		case 11:return 'B';break;
		case 12:return 'C';break;
		case 13:return 'D';break;
		case 14:return 'E';break;
		case 15:return 'F';break;
	}
}
int main()
{
	while(1)
    {
        int n,r,exchange=0;
	    if(scanf("%d %d",&n,&r)==EOF) break;//�ĵ�ĩβ���� 
	    if(n<r)
		{
			printf("%c\n",output(n));//�����������n<r 
		}
		else
		{
		    int y=n,w,i=0;
		    char store[100];
		    while(y)//����ת�� 
		    {
		    	w=y%r;
			    store[i]=output(w);
		    	y=y/r;
		    	i++;
	    	}
		    while(i--)//��� 
		    {
		    	printf("%c",store[i]);
		    }
	    	printf("\n");
	    }
    }
	return 0;
}

