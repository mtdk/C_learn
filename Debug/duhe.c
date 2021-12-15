#include <stdio.h>

int main()
{
	int a=6/(3-1)+1;
	int *p;
	p=&a;
	printf("至少能%d次全部渡河\n", *&a);
	
	return 0;
}
