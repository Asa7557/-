#include<iostream>
#include<cstring>
int main() {
	int i,count;
	char c[255];
	while(gets(c)!=NULL) {//�ĵ�ĩβ�� ctrl+z���� 
		for(i=0; i<strlen(c)/2; i++) {//ֻ��Ҫ�жϵ��ַ�����һ�� 
			if(c[i]<0) {//���ֵ�������ж� 
				if(c[i]==c[strlen(c)-i-2]&&c[i+1]==c[strlen(c)-i-1]) {
					i++;
					count++;
				}
				else break;
			} 
			else {//������ĸֱ���ж� 
				if(c[i]==c[strlen(c)-1-i]) count++;
				else break;
			}
		}
		if(i>=strlen(c)/2) printf("yes\n");//���ͨ���ж�ѭ���������ж��Ƿ���� 
	    else printf("no\n");
	}
}
