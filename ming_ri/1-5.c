#include <stdio.h>
// 定义常量 
#define HEG 0.54

// 声明函数 
float height(float father, float mother);

int main(){
	float father;
	float mother;
	float son;
	
	printf("请输入父亲的身高：");
	scanf("%f", &father);
	
	printf("请输入母亲的身高：");
	scanf("%f", &mother);
	
	// 调用 height 函数计算孩子的身高 
	son = height(father,mother);
	
	printf("预测孩子的身高：");
	printf("%.2f\n", son);
	
	return 0;
}

// 定义计算孩子身高的函数
float height(float father, float mother){
	float son = (father + mother) * HEG;
	
	return son;
} 
