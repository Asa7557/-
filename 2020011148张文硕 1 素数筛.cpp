#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,MAXN;
	cin>>n; 
	MAXN=n+1;//����n+1��С������ 
	int prime[MAXN]={0};//Ĭ��������������������ʶΪ 0 
	int m = sqrt(MAXN);
	prime[0] = 1;
	prime[1] = 1;//0�� 1 �޳��� 
	for(int i = 2; i <= m; i++)
	{
		if(prime[i])
		{
			continue;
		}//�����Ѿ��޳��ķ�����������ѭ����������ʡʱ�临�Ӷ� 
		for(int j = i; j * i < MAXN; j++)
		{
			prime[i * j] =1;
		}
	}//ɸ���޳������� 
	for(int i = 0; i < MAXN; i++)
	{
		if(!prime[i]){
			cout << i << " ";
		}
	}
	return 0;
}
