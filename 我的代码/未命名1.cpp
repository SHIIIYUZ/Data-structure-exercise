#include <stdio.h>
typedef  struct {
    //elemtype  elem[MAXLEN];
    int       length;
} sqlist;

void  Initiate(sqlist *c )
{   
    c->length = 65;
}

int main()
{
	sqlist a;
	sqlist *p=&a;

	Initiate(p);
	
	printf("%d",a.length);
	
	return 0;
	
}
