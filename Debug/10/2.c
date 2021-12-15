#include <stdio.h>

int main()
{
	int *p,*q,a[5],b[5],i;
	
	p=&a[0];
	q=b;
	printf("please input array a:\n");
	
	for(i=0;i<5;i++){
		scanf("%d",p++);
		
		printf("array a is:\n");
		for(i=0;i<5;i++){
			printf("%5d",*p++);
			printf("\n");
		}
		printf("array b is:\n");
		for(i=0;i<5;i++){
			printf("%5d",*q++);
			printf("\n");
		}
	}
}
