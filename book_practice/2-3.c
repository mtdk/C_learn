#include <stdio.h>

// �����¶�100�H��Ӧ�������¶�

int main(void){
	
	// �����������ͱ�����celsius��ʾ�����¶ȣ�fahr��ʾ�����¶�
	int celsius, fahr;
	fahr = 100;
	celsius = 5 * (fahr - 32) / 9;		// �¶�ת����ʽ
	
	printf("fahr=%d, celsius=%d\n", fahr, celsius);
	
	return 0; 
} 
