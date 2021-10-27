#include <stdio.h>

int main()
{
	// 数位每次加1
	int count_num = 1;
	// 记录二进制值每次乘2 
	int bin_num = 1;
	// 输入的整数 
	int input_num;
	// 保存结果 
	int result_num=0;
	// 临时保存整数的模余数 
	int tmp=0;
	
	scanf("%d", &input_num);
	
	while(input_num != 0){
		// 获取当前位置上的数 
		tmp = input_num % 10;
		// 位数+位置 
		if((tmp + count_num) % 2 == 0){
			result_num = result_num + bin_num;
		}
		// 下一个位置 
		count_num++;
		// 实现执行一次抛弃一位数 
		input_num = input_num / 10;
		// 计算二进制值 
		bin_num = bin_num * 2;
	}
	printf("%d\n",result_num);
	return 0;
}
