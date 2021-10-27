#include <stdio.h>

int main()
{
	// 定义奇数计数变量 
	int odd_numbers = 0;
	// 定义偶数计数变量 
	int even_numbers = 0;
	
	// 定义输入数变量 
	int num;
	
	scanf("%d", &num);
	while(num != -1)
	{
		if(num % 2 == 0){
			even_numbers += 1;
		}else{
			odd_numbers += 1;
		}
		scanf("%d", &num);
	}
	
	printf("%d %d", odd_numbers, even_numbers);
	
	return 0;
}
