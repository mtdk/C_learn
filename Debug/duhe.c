#include <stdio.h>

int main()
{
	int a=6/(3-1)+1;
	int *p;
	p=&a;
	printf("������%d��ȫ���ɺ�\n", *&a);
	
	return 0;
}
