#include <stdio.h>

int main()
{
	int a;
	int *ipointer;
	printf("����������\n");
	scanf("%d",&a);
	ipointer=&a;
	
	printf("����ת��Ϊʮ������Ϊ��%x\n", *ipointer);
	
	printf("���ָ�������ַ��%d\n", ipointer);
	return 0;
}
