#include <stdio.h>

int main()
{
	// aΪ���ֵ 
	int a = 0;
	// nΪ������� 
	int n = 0;
	// ��i���ֵΪ x*10+a 
	int x = 0;
	// ��Ŷ���ʽ������ս�� 
	int sum = 0;
	
	scanf("%d %d", &a, &n);
	int i = 1;
	for(; i <= n; i++){
		x = x * 10 + a;
		
		// sum = sum + x;
		sum += x;
		
	}
	
	printf("%d", sum);
	
	return 0;
}
