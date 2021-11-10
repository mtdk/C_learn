#include <stdio.h>

// 求华氏温度100℉对应的摄氏温度

int main(void){
	
	// 定义两个整型变量，celsius表示摄氏温度，fahr表示华氏温度
	int celsius, fahr;
	fahr = 100;
	celsius = 5 * (fahr - 32) / 9;		// 温度转换公式
	
	printf("fahr=%d, celsius=%d\n", fahr, celsius);
	
	return 0; 
} 
