#include <stdio.h>
// ���峣�� 
#define HEG 0.54

// �������� 
float height(float father, float mother);

int main(){
	float father;
	float mother;
	float son;
	
	printf("�����븸�׵���ߣ�");
	scanf("%f", &father);
	
	printf("������ĸ�׵���ߣ�");
	scanf("%f", &mother);
	
	// ���� height �������㺢�ӵ���� 
	son = height(father,mother);
	
	printf("Ԥ�⺢�ӵ���ߣ�");
	printf("%.2f\n", son);
	
	return 0;
}

// ������㺢����ߵĺ���
float height(float father, float mother){
	float son = (father + mother) * HEG;
	
	return son;
} 
