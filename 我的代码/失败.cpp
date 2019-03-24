#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Max 10;

int check(int,int*);
int checkIfEq(int,int,int*);

int main()
{
	int array[Max];
	int i,T,result;
	T = 20;
	srand(time(NULL));
	for (i=0;i<10;i++)
	{
		array[i]=rand()%9+1;
	}
	
	result = 
	if()
		printf("It can be fulled!");
	else
		printf("It can't' be fulled!");
}

int check(int T,int* p)
{
	/*
	int i = 0;
	
	for (i;i<10;i++)
	{
		printf("%d\n",p[i]); 
	} 
	*/
	int j=0;
	
	check(T-p[j],p);
	
}

int checkIfEq(int j,int index,int* p)
{
	for(;;++index)
	{
		if(j==p[])
	}
}

	//Ê§°Ü´úÂë
	/* 
	if (j>=10)
	{
		printf("The bag can contain all things!\n");
		return 1;
	}
	else if(n>0)
	{
		sign=j;
		return(check(n-p[j],p,++j,sign));
	}
		
	else if (n == 0)
	{
		return 1;
	}
	else if(n<0)
	{
		n=n+p[--j]+p[sign];
		sign++;
		j=sign+1;
		return(check(n,p,j,sign))	
	}	
	*/
