/*  ��Ϊ��������aΪ����bΪ��ĸ
    ���Ӽ򵥣����� 1��
	��ĸ�Ƚϸ��ӣ���n=4ʱ
	1 2 3 4
	2 1 2 3
	3 2 1 2
	4 3 2 1
	���ѿ�������һ���Գƾ���*/ 
#include<bits/stdc++.h>//�´β����˹� 
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		int a[n][n],b[n][n],m=n*n;
	    float sum=0;
	    fill(a[0],a[0]+m,1);//�Է��Ӹ�ֵ 
		for(int r=0;r<n;r++)//��b�Խ��߸�ֵ 
		{
			b[r][r]=1;
		}
		for(int t=0;t<n;t++)//��b�Խ������µĲ��ָ�ֵ 
		{
			int temp=t+1;
			int count=n-t-1; 
			while(count--)
			//ѭ������Ϊ n - ��Ӧ�Խ��ߵ��±��ټ� 1 
			{
				b[t][temp]=b[t][temp-1]+1;
				temp++;
			}
		}
		for(int x=0;x<n;x++)//���ݶԳƶ����ϸ�ֵ 
		{
			for(int y=0;y<n;y++)
			{
				b[y][x]=b[x][y];
			}
		} 
		for(int k=0;k<n;k++)//a b ��ӦԪ�����Ȳ��浽sum 
	    {
	    	for(int g=0;g<n;g++)
	    	{
	    	    sum=sum+(float)a[k][g]/(float)b[k][g];
	    	}
		}
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<sum<<endl;
		//����С��λ�� cout �е�������� printf ���� 
		cin>>n;
	}
    return 0;
}

