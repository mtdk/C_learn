#include <stdio.h>

int main()
{
	int a,b;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	
	int max = b;
	// 判断a和b哪个数大
	if(a > b){
		max = a;
	}
	
	printf("大的那个是%d\n", max);
	
	return 0;
}
