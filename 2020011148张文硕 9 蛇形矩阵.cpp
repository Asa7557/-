//����һ��͵����Ȼ��������ż����һ�������࣬�е��鷳����˼·���� 
//���⿴©����Ŀ��ֻ������������������ȿ��Դ��������ֿ��Դ���ż�� 
#include<iostream>
using namespace std;
int data[20][20]={0};
void full1(int number,int begin,int size);//�������� 
void full2(int number,int begin,int size);//����ż�� 
int main() {
	int n,i,j,sum=0;
	scanf("%d",&n);
	data[n/2][n/2]=1;
	if(n%2!=0) 
	full1(n*n,n-1,n);
	else full2(n*n,0,n);
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {//˳��������� 
			printf("%3d ",data[i][j]);
		}
		cout<<endl;
	}
	for(int k=0;k<n;k++)
	{
		sum=sum+data[k][k];
	}
	cout<<sum;
	return 0;
}
void full1(int number,int begin,int size) {
//numberÿһ�ο�ʼ��������,beginÿһ����ʼλ���±꣬size����Ľ���
	int i=begin,j=begin,k;
	if(size==1||size==0) {//��sizeΪ0��1ʱ�����ݹ� 
		return;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		j--;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		i--;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		j++;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		i++;
	}
	full1(number,begin-1,size-2);//�ݹ� 
}
void full2(int number,int begin,int size) {
//numberÿһ�ο�ʼ��������,beginÿһ����ʼλ���±꣬size����Ľ���
	int i=begin,j=begin,k;
	if(size==1||size==0) {//��sizeΪ0��1ʱ�����ݹ� 
		return;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		j++;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		i++;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		j--;
	}
	for(k=size-1;k>0;k--) {
		data[i][j]=number--;
		i--;
	}
	full2(number,begin+1,size-2);//�ݹ� 
}
