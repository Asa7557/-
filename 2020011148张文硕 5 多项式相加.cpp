//����������˺þã��ҵķ�����Ҫ�õ������ð������Ƚϸ���
//������������ppt�ϵķ���
//������������ҿ���Ҳ��ȫ�ԣ��Ȼ�����ʦ���ɡ�
//�һ��Ǿ���Ӧ���ȶ�������������Ȼ���Ӧ�����Ȼ�󶼺ϲ����´������������� 
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct LNode {
	int coef;
	int power;
	struct LNode *next;
}*plist;
void createlist(plist &L,int n) { //β�巨
	int i;
	plist p,r;
	L = (plist)malloc(sizeof (LNode));
	L-> next = NULL;    // �Ƚ���һ����ͷ���Ŀ�����
	r=L;
	for (i = 0; i < n; i++) {
		p = (plist) malloc (sizeof (LNode));   // ÿ������һ���½��
		cin>>p->coef>>p->power;
		p->next=NULL;
		r->next=p;   // ���뵽��ͷ
		r=p;
	}
}
plist mergeLinklist(plist ha, plist hb) {
	plist p, q, r;
	int x;
	p = ha->next;
	q = hb->next;
	r = ha;
	while (p!=NULL && q!=NULL) {
		if (p->power > q->power) {
			r->next = p;	//a��ָ����
			r = r->next;
			p = p->next;
		} else if (p->power < q->power) {
			r->next = q;	//b��ָ����
			r = r->next;
			q = q->next;
		} else {	//����ָ�����
			p->coef = p->coef + q->coef;
			if (p->coef != 0) {  //ϵ����Ϊ0
				r->next = p;
				r = r->next;
			}
			p = p->next;
			q = q->next;
		}
	}
	if (p!=NULL)
		r->next = p;
	else
		r->next = q;
	return ha;
}
int main() {
	plist L1,L2,L3;
	int a,b;
	cin>>a>>b;
	createlist(L1,a);
	createlist(L2,b);
	mergeLinklist(L1,L2); 
	plist output=L1->next;
    {
    	while(output!=NULL)
    	{
    		cout<<output->coef<<' '<<' '<<output->power<<endl;
    		output=output->next;
		}
	}
	return 0;
}
