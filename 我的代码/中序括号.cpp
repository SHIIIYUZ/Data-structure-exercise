#include <stdio.h>
#include <malloc.h>
#include<iostream>  
using namespace std;  

typedef struct node{
	char data;
	struct node* lp;
	struct node* rp;
}node;
 
void createBiTree(node* &,char*,int*);//ǰ���������һ�Ŷ�������
int readTree(node*);//�����ж�ȡ�������ŵı��ʽ 
int judgeOperator(node*,node*);//�жϽڵ�����ӽڵ�Ĳ��������ȼ���

int main(){
	int i=0;
	//����һ�����ʽ��ǰ�����У� 
	char a[30] = {'*','+','a','#','#','/','b','#','#','-','c','#','#','d','#','#','+','e','#','#','f','#','#'};

	node* T;
	createBiTree(T,a,&i);
	readTree(T);
	
} 

void createBiTree(node* &T,char* a,int* i)  
{  
    char c;  
    c=a[*i];
    *i=*i+1;
    if('#' == c)  
        T = NULL;  
    else  
    {  
        T = new node;  
        T->data = c;  
        createBiTree(T->lp,a,i);  
        createBiTree(T->rp,a,i);  
    }  
}  

int readTree(node* p){			
	if(p==NULL)
		return 0;	
	if((p->data=='+')||(p->data=='-')||(p->data=='*')||(p->data=='/'))
	{
		//�Ƚϸ��ڵ�������ӽڵ�Ĺ�ϵ��������ڵ�����ȼ��ߣ��������������ţ�����������˳�������ȡ�� 
		if(judgeOperator(p,p->lp)){
			printf("(");				
			readTree(p->lp);		
			printf(")");
		}	
		else
			readTree(p->lp);	
	}
	else 
		readTree(p->lp); 
		
	printf("%c",p->data);
	
	if((p->data=='+')||(p->data=='-')||(p->data=='*')||(p->data=='/'))
	{
		//�Ƚϸ��ڵ�������ӽڵ�Ĺ�ϵ��������ڵ�����ȼ��ߣ��������������ţ�
		//�ҽڵ��Ӧ������Ӧ�ڸ�������Ҳ࣬���������������ټ����ţ�����������˳�������ȡ�� 
		if(judgeOperator(p,p->rp)){
			printf("(");
			readTree(p->rp);			
			printf(")");
		}
		else
			readTree(p->rp);
	}	
	else
		readTree(p->rp);
}

int judgeOperator(node* p1,node* p2){
	
	if(((p1->data=='*')||(p1->data=='/'))&&((p2->data =='-')||(p2->data =='+')))
		return 1;
	else
		return 0;		
}
