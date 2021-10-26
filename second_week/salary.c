#include <stdio.h>

// 薪水计算
 
int main(){
	// 设置每小时薪水 
	const double RATE = 8.25;
	// 设置一周标准工作时间 
	const int STANDARD = 40;
	// 应付金额
	double pay = 0.0;
	// 工作时间
	int hours;
	
	printf("请输入工作的小时数：");
	scanf("%d", &hours);
	printf("\n");
	
	if(hours > STANDARD){
		pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
	}else{
		pay = hours * STANDARD;
	}
	
	printf("应付工资：%f\n", pay);
	
	return 0;
}
