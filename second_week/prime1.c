#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	// ��ѭ������ 
	int i;
	// ��ѭ������ 
	int j;
	// ������ 
	int sum_prime = 0;
	// ����Ƿ�Ϊ���� 
	int prime_flag = 1;
	// �������� 
	int count = 0;
	
	// ����������n��m������0<n<=m<=200 
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
