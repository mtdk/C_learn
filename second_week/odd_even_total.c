#include <stdio.h>

int main()
{
	// ���������������� 
	int odd_numbers = 0;
	// ����ż���������� 
	int even_numbers = 0;
	
	// �������������� 
	int num;
	
	scanf("%d", &num);
	while(num != -1)
	{
		if(num % 2 == 0){
			even_numbers += 1;
		}else{
			odd_numbers += 1;
		}
		scanf("%d", &num);
	}
	
	printf("%d %d", odd_numbers, even_numbers);
	
	return 0;
}
