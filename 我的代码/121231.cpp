#include <stdio.h>

int main()
{
   void swap(int *p1,int *p2);
   int a,b;
   int *pointer_1,*pointer_2;
   scanf("%d",&a);
   scanf("%d",&b);
   pointer_1=&a;
   pointer_2=&b;
   if(a<b) swap(pointer_1,pointer_2);
   printf("\n%d,%d\n",a,b);
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
