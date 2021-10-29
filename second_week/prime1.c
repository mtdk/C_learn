#include <stdio.h>

int main()
{
	int i,n=0,m=0,sum_prime=0,j=0;
	int prime_flag =1;
	int count=0;
	do{
		scanf("%d %d", &n,&m);
	}while(n<0 && n>m && m>10);
	
	for(i=2;i<=10;i++){
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
