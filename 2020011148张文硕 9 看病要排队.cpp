//��֪��������...���� 
#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct DUI {
	int grade,data;
	struct DUI *next;
}*pDUI;
void create(pDUI &head) { //��������
	pDUI tail;
	head=(pDUI)malloc(sizeof(DUI));
	tail=(pDUI)malloc(sizeof(DUI));
	head->data=0;
	tail->data=0;
	head->next=tail;//ͷָ��β���ն���
	tail->next=NULL;
}
int main() {
	int n;
	while(cin>>n) {//�ĵ�ĩβ���� 
		pDUI docA,docB,docC;
		create(docA);
		create(docB);
		create(docC);//�ֱ�Ϊ3��ҽ�������Լ��Ķ��� 
		for(int i=1; i<=n; i++) {
			int grade=0;
			char a[4],d;
			scanf("%s %c %d",a,&d,&grade);
			/*cout<<a<<' '<<d<<' '<<grade<<endl; */
			if(a[0]=='I') {//����ǽ�������� 
				pDUI s1=docA,s2=docB,s3=docC,rear,temp;
				rear=(pDUI)malloc(sizeof(DUI));
				rear->grade=grade;//grade����ȼ� 
				rear->data=i;//data�������к� 
				switch (d) {//ѡ����� 1 2 3 ҽ���Ķ��� 
					case '1':
						while(s1->data>=grade) {//�����ȼ��ȼ��Ŷ� 
							temp=s1;
							s1=s1->next;
						}
						rear->next=s1;
						temp->next=rear;
						break;
					case '2':
						while(s2->data>=grade) {
							temp=s2;
							s2=s2->next;
						}
						rear->next=s2;
						temp->next=rear;
						break;
					case '3':
						while(s3->data>=grade) {
							temp=s3;
							s3=s3->next;
						}
						rear->next=s3;
						temp->next=rear;
						break;
				}
			} else {//���������������� 
					pDUI outputA=docA->next;
					pDUI outputB=docB->next;
					pDUI outputC=docC->next;
				switch (d) {
					case '1':
						if(outputA->next!=NULL)//��������׸�Ԫ�ص����к� 
							cout<<outputA->data;
						else
							printf("EMPTY");
						break;
					case '2':
						if(outputB->next!=NULL)
							cout<<outputB->data;
						else
							printf("EMPTY");
						break;
					case '3':
						if(outputB->next!=NULL)
							cout<<outputB->data;
						else
							printf("EMPTY");
						break;
				}
			}
		}
	}
	return 0;
}
