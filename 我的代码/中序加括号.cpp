#include <stdio.h>

typedef struct node{
	char data;
	struct node* lp;
	struct node* rp;
}node;

typedef struct inn{
	char[100] data;
	struct inn* nextp;
}inn;

	int createTree(node*,char*,int );
	int toInn(node* ,inn* );


int main(){
	char a[15] = {'*','+','a','/','b','-','c','d','+','e','f'};
	node root;
	inn innNum,innOperator;
	int c = 0;
	
	node* rootp = &root
	createTree(rootp,a,0);
	toInn(rootp,&innNum,&innOperator);
	read(&innNum,&innOperator);
} 

int createTree(node* p,char* a,int i)
{
	p->data = a[i]; 
	if(a[i] == 'a'||a[i] == 'b'||a[i] == ||a[i] == 'd'||a[i] == 'e'||a[i] == 'f'){
		return 0;
	}
	createTree(p->lp,a,++i);
	createTree(p->rp,a,++i);
	return 0;
}

int toInn(node* s,inn* innOperator){
	inn b;
	if (s==NULL)
		return 0;
	toInn(s->lp,innOperator);
	toInn(s->rp,innOperator);
	if(!(s->data>='a'&&s->data<='z'))
	{
		b.data[0] = s->data;
		innOperator->nextp = &b;
		return 0;		
	}			
}


int read(node* s,inn* innNum,inn* innOperator,int* c){
	
	inn a;
	if (s==NULL)
		return 0;
	toInn(s->lp,innNum,innOperator,c);
	toInn(s->rp,innNum,innOperator,c);
	if(s->data>='a'&&s->data<='z')
	{		
		a.data[0] = s->data;
		innNum->nextp = &a;
		*c=++(*c);
		if(*c==2){
			subRead(innNum,innOperator);
			*c=1;
		}
		return 0;		
	}

	else 
		return 0;
		
}

subRead(inn* innNum,inn* innOperator){
	int bra = compareOp(innNum,innOperator);
		
}
