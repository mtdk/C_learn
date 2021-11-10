#include <stdio.h>
#include <math.h>

// 坚持的力量 

int main(void){
	
	int day;
	double factor, initial, result;
	
	printf("Enter initial:");
	scanf("%lf", &initial);
	printf("Enter factor:");
	scanf("%lf", &factor);
	printf("Enter day:");
	scanf("%d", &day);
	
	result = initial*pow(1+factor, day);
	printf("result=%.2f\n", result);
	
	return 0;
}
