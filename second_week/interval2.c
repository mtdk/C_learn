#include <stdio.h>

int main()
{
	// ��������ʱ��ļ�� 
	int hour1, minute1;
	int hour2, minute2;
	
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int ih = hour2 - hour1;
	int im = minute2 - minute1;
	
	// �жϷ������Ƿ����0��������0ʱСʱ��Ҫ��1 
	if(im < 0){
		im = 60 - im;
		ih--;
	}
	
	printf("ʱ�����%dСʱ%d�֡�\n", ih, im);
	
	return 0;
}
