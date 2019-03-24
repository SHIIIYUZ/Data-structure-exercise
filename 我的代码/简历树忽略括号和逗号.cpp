#include <stdio.h>
#include <malloc.h>
#include<iostream>  
  

typedef struct node{
	char data;
	struct node* lp;
	struct node* rp;
}node;
 
void createBiTree(node* &,char*,int*);。 


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

