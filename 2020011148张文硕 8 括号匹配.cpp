#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct zhan {
	char data[101];
	int top;
} STACK;//����ջ 
int main() {
	char a[101];
	while(cin>>a) {//ctrl+z���� 
		int i=0,flag=1;
		STACK w;
		w.top = 0;
		while(a[i]!='\0') {
			switch (a[i]) {//3�� ǰ���Ž�ջ��3�� �����űȽ� 
				case '(':
					w.data[w.top++]=a[i];//��ջ 
					break;
				case '[':
					w.data[w.top++]=a[i];
					break;
				case '{':
					w.data[w.top++]=a[i];
					break;
				case ')':
					if(w.data[--w.top]!='(') flag=0;//��ջ 
					break;
				case ']':
					if(w.data[--w.top]!='[') flag=0;
					break;
				case '}':
					if(w.data[--w.top]!='{') flag=0;
					break;
			}
			i++;
			if(flag==0) break;//����м���һ��û��Ӧ��ֱ����ǰ�˳�ѭ������ʡʱ�临�Ӷ� 
		}
		if(w.top!=0) flag=0; 
		if(flag) cout<<'y'<<'e'<<'s'<<endl;
		else cout<<'n'<<'o'<<endl;
	}
	return 0;
}
