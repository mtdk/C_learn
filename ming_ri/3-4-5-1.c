#include <stdio.h>

#define PAI 3.14

int main(){
	double fRadius;
	double fResult = 0;
	
	printf("������Բ�İ뾶��");
	scanf("%lf", &fRadius);
	
	fResult = fRadius * fRadius * PAI;
	printf("Բ�����Ϊ��%lf\n", fResult);
	
	return 0;
}
