#include <stdio.h>

int main()
{
	int x = 2; //��һ������
	int flag = 1; //�������
	int count = 0; //��������
	int sum = 0; // ��n����������m�������ĺ�
	int n;
	int m;
	
	scanf("%d %d", &n, &m);
	if(n > 0){
		if(n <= m){
			if(m <= 200){
				// ����m������ 
				while(count < m){
					// �ж��Ƿ�Ϊ����
					flag = 1;
					int i;
					for(i = n; i < x; i++){
						if(x % i == 0){
							flag = 0;
							break;
						}
					}
					if(flag){
						count++;
						// ����ǵ�n��������ʼ���������� 
						if(count >= n){
							sum += x;
						}
					}
					x++;
				}
			}
		}
	}
	printf("%d", sum);
	
	return 0;
}
