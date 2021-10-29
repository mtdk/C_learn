#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	// 外循环变量 
	int i;
	// 内循环变量 
	int j;
	// 素数和 
	int sum_prime = 0;
	// 标记是否为素数 
	int prime_flag = 1;
	// 素数个数 
	int count = 0;
	
	// 输入两个数n和m，满足0<n<=m<=200 
	do{
		scanf("%d %d", &n,&m);
	}while(n<0 && n>m && m>200);
	
	
	for(i=2;i<=200;i++){
		prime_flag=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				prime_flag=0;
				break;
			}
		}
		if(prime_flag){
			count++;
		}
		if(prime_flag==1&&count>=n&&count<=m){
			sum_prime+=i;
		}
	}
	
	printf("%d",sum_prime);
	
	return 0;
}
