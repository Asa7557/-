#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int data[n];
	//�����Ŀ��ȷ˵���˱���n��ʾ����Ԫ�ظ����� 
	for(int i=0;i<n;i++)//�������ݣ� 
	{
		scanf("%d",data+i);//ָ�벻̫��  QAQ
	} 
	for(int j=0;j<n;j++)
	{
		for(int k=j;k<n;k++)
		{
			if(data[j]>data[k])//�ж����� 
			{
				cout<<"("<<data[j]<<","<<data[k]<<")"<<endl;
				//printf("(%d,%d)\n",data[j],data[k]);
				//����֪��cout��printf�������ǲ�δ���֣� 
			}
		}
	}
	return 0;
}
