#include<bits/stdc++.h>//����ͷ����Զ���� 
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;//c99��׼֧�����Ѹ�ֵ�ı䶨�������С 
	int a[m*n],b[m*n];
	for(int i=0;i<m*n;i++)
	cin>>a[i];
	for(int j=0;j<n*m;j++)//�����b��ֵ 
	{
		b[m*n-j-1]=a[j];
	}
	for(int t=0;t<n*m;t++)//��� 
	{
		cout<<b[t]<<' ';
		if((t+1)%m==0) cout<<endl;
		//�ں���λ������س�����װ���Ƕ�ά���� 
	}
	return 0;
}
