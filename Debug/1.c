#include <stdio.h>

int main()
{
	int a;
	int *ipointer;
	printf("请输入数据\n");
	scanf("%d",&a);
	ipointer=&a;
	
	printf("将其转化为十六进制为：%x\n", *ipointer);
	
	printf("输出指针变量地址：%d\n", ipointer);
	return 0;
}
