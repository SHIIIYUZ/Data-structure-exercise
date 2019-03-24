#include <stdio.h>

typedef struct node{
	char data;
	struct node* lp;
	struct node* rp;
}node;


void createTree(node* &,char*,int );


int main(){
	char a[15] = {'*','+','a','/','b','-','c','d','+','e','f'};
	node* rootp=NULL;	
	createTree(rootp,a,0);
	if(rootp==NULL)
	printf("c");
} 

void createTree(node* &p,char* a,int i)
{	
	node q;
	p=&q;
}

