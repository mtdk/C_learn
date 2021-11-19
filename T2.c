#include <stdio.h>

int main()
{
/*
	x控制行循环输出,y控制列循环输出
	根据题意 1<=n<=20，因此，x和y的取值从1开始比较方便
	(x==1||x==n||y==1||y==n)使第一行和最后一行全部输出为A
	(x>=3 && x<n-1)判断是否为第三行至倒数第二行区间（是进入下一个判断，否则输出B） 
	(y==2||y==n-1)判断是否为第二列或者倒数第二列（是就输出B，否则输出A） 
*/	
	int x,y,n;
//	scanf("%d",&n);
n=5;
	if(n>=1 && n<=20){	
		for(x=1;x<=n;x++){
			for(y=1;y<=n;y++){
				if(x==1||x==n||y==1||y==n){
					printf("A");
				}else if(x>=3 && x<n-1){
					if(y==2||y==n-1){
						printf("B");
					}else{
						printf("A");
					}
				}else{
					printf("B");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}
