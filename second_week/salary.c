#include <stdio.h>

// нˮ����
 
int main(){
	// ����ÿСʱнˮ 
	const double RATE = 8.25;
	// ����һ�ܱ�׼����ʱ�� 
	const int STANDARD = 40;
	// Ӧ�����
	double pay = 0.0;
	// ����ʱ��
	int hours;
	
	printf("�����빤����Сʱ����");
	scanf("%d", &hours);
	printf("\n");
	
	if(hours > STANDARD){
		pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
	}else{
		pay = hours * STANDARD;
	}
	
	printf("Ӧ�����ʣ�%f\n", pay);
	
	return 0;
}
