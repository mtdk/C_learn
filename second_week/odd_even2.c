#include <stdio.h>

int main()
{
	// ��λÿ�μ�1
	int count_num = 1;
	// ��¼������ֵÿ�γ�2 
	int bin_num = 1;
	// ��������� 
	int input_num;
	// ������ 
	int result_num=0;
	// ��ʱ����������ģ���� 
	int tmp=0;
	
	scanf("%d", &input_num);
	
	while(input_num != 0){
		// ��ȡ��ǰλ���ϵ��� 
		tmp = input_num % 10;
		// λ��+λ�� 
		if((tmp + count_num) % 2 == 0){
			result_num = result_num + bin_num;
		}
		// ��һ��λ�� 
		count_num++;
		// ʵ��ִ��һ������һλ�� 
		input_num = input_num / 10;
		// ���������ֵ 
		bin_num = bin_num * 2;
	}
	printf("%d\n",result_num);
	return 0;
}
