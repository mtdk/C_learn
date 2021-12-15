#include <stdio.h>

int main()
{
	int *p,q;
	printf("please input:\n");
	
	scanf("%d",&q);
	p =&q;			// 将变量地址传递给指针p 
	printf("the number is :\n");
	
	printf("%d\n", *p);		// 输出指针变量值 
	return 0;
}
