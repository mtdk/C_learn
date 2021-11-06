#include <stdio.h>

int main()
{
	// a为求和值 
	int a = 0;
	// n为求和项数 
	int n = 0;
	// 第i项的值为 x*10+a 
	int x = 0;
	// 存放多项式求和最终结果 
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
