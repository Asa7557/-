#include<stdio.h>
int factor(int m){ //�� n �ۼ� 
	int sum=0;
	for(int i=1; i<=m; i++) {
		sum=sum+i;
	}
	return sum;
}
int main() {
	int a[215],n;
	while(scanf("%d",&n)!=EOF) {
		n++;
		int temp=3;
		a[0]=1,a[1]=1,a[2]=1;
		for(int i=2; i<n; i++) { //��� 
			a[temp]=1;
			a[temp+i]=1;//���ߵĶ���1 
			for(int j=1; j<i; j++) {
				a[temp+j]=a[temp+j-i]+a[temp+j-i-1];//�м�ĵ�����һ�ж�Ӧ����Ԫ����� 
			}
			temp+=i+1;
		}
		for(int k=n-1; k>0;) {//������� 
			for(int t=k;t<n;t++) printf("%3c",' ');//��ε������� 
			for(int g=0;g<k;g++){
				printf("%6d",a[factor(k)-k+g]);
			}
			printf("\n");
			k--;
		}
	}
	return 0; 
}
