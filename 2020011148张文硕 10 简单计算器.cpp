#include<iostream>
#include<cstdlib>
#include<cstring>
#define N 1000
using namespace std;
typedef struct zhan {
	float data[N];//ϸ�ڸ�����
	int top;
} zhan;
int main() {
	int n;
	scanf("%d%*c",&n);//��һ���ո�
	while(n--) {
		zhan s;
		s.top=0;
		char a[N];
		scanf("%[^\n]%*c",a);//ϸ�ڷ�����
		int len=strlen(a),i=0;
		float temp,b,ten;
		for(;i<len;) {
			if(a[i]>='0'&&a[i]<='9') {//���ִ��� 
				temp=0;
				while(a[i] && (a[i]>='0' && a[i]<='9')) {
					temp=temp*10.0+a[i]-'0';
					i++;
				}
				s.data[s.top++]=temp;
			} 
			else if(a[i]=='.') {//����С���� 
				b=0;
				i++;
				ten=1;
				while(a[i]&&(a[i]>='0'&&a[i]<='9')) {
					b=b*10.0+a[i]-'0';
					ten=ten*10.0;
					i++;
				}
				float ding=s.data[--s.top];
				ding=ding+b/ten;
				s.data[s.top++]=ding;
			}
			else if(a[i]==' ') i++;
			else {//������������� 
				char c=a[i];
				float a=s.data[--s.top];
				float b=s.data[--s.top];
				switch (c) {
					case '+':
						a=a+b;
						break;
					case '-':
						a=b-a;//ջ����ȳ�
						break;
					case '*':
						a=a*b;
						break;
					case '/':
						a=b/a;
						break;
				}
				s.data[s.top++]=a;
				i++;
			}
		}
		printf("%.2f\n",s.data[0]);//���ջ�� 
	}
	return 0;
}
