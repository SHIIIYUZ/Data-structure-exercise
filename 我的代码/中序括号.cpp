#include <stdio.h>
#include <malloc.h>
#include<iostream>  
using namespace std;  

typedef struct node{
	char data;
	struct node* lp;
	struct node* rp;
}node;
 
void createBiTree(node* &,char*,int*);//前序遍历建立一颗二叉树；
int readTree(node*);//从树中读取带有括号的表达式 
int judgeOperator(node*,node*);//判断节点和其子节点的操作符优先级；

int main(){
	int i=0;
	//输入一个表达式的前序排列； 
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
		//比较根节点和其左子节点的关系，如果根节点的优先级高，则在其外侧加括号；若非则按中序顺序继续读取。 
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
		//比较根节点和其右子节点的关系，如果根节点的优先级高，则在其外侧加括号；
		//右节点对应的括号应在根算符的右侧，所以先输出算符，再加括号，若非则按中序顺序继续读取。 
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
