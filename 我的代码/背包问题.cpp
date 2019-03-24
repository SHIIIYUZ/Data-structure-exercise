#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int check(int,int*,int*,int,int);
void sort(int *, int);//数组排序函数； 


int main(){
	int array[10];//物品数组 ； 
	int indexArr[10];//存放已在背包里的物品； 
	int i,T=20;//假设最大容量是20 ；
	
	 
	srand(time(NULL));
	for (i=0;i<10;i++)//创造十个随机重量的物品； 
	{
		array[i]=rand()%9+1;
	}
	
	
	sort(&array[0],10); //由小到大排序物品数组； 
	
	if(check(T,&array[0],&indexArr[0],0,0))
	{
		printf("It can be fulled!");
		for (i=0;i<10;i++)
		{
			printf("%d\n",array[indexArr[i]]);
		}
	}
		
	else
		printf("It can't' be fulled!");
}

int check(int T,int* p,int* x,int goods,int sign)
{
	//检验代码 
	/* 
	int i = 0;
	
	for (i;i<10;i++)
	{
		printf("%d\n",p[i]); 
	} 
 	*/ 

	
	if (T==0)
	{
		return 1;
	}
	else if(goods>9||T<0)
	{
		T=T+p[sign-1]+p[sign-2];
		sign-=2;
		x[sign]++;
		goods=p[x[sign]];
		return(check(T-p[goods],p,x,goods,sign));
	}
	else if (T>0)
	{
		x[sign]=goods;
		return(check(T-p[goods],p,x,++goods,++sign));
	}
	else return 0;	

	 
}


void sort(int *p, int length){

    int i, j, temp;

    for(i = 0; i < length; ++i){

        for(j = i + 1; j < length; ++j){

            if(p[j] < p[i]){    

                temp = p[i];

                p[i] = p[j];

                p[j] = temp;

            }

        }
    }

} 
