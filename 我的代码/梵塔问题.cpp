#include <stdio.h>
//èóËşÎÊÌâ 
int move(int );

int main()
{
	int n;
	printf("Please input the total number of the game.\n");
	scanf("%d",&n);
	printf("%d",move(n));
	return 0;	
} 
 
 int move(int n)
 {
 	
 	if ( n == 1 )
 		return 1; 		
 	else	
 		return 2*move(n-1) + 1;
 		
 }
