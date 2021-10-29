#include <stdio.h>

int main()
{
	int x = 2; //第一个素数
	int flag = 1; //素数标记
	int count = 0; //素数个数
	int sum = 0; // 第n个素数到第m个素数的和
	int n;
	int m;
	
	scanf("%d", &n);
	scanf("%d", &m);
	if(n > 0 && n < m && m < 200){
			// 遍历m个素数 
		while(count < m){
			// 判断是否为素数
			flag = 1;
			int i;
			for(i = 2; i < x; i++){
				if(x % i == 0){
					flag = 0;
					break;
				}
			}
			if(flag){
				printf("%d\n", x);
				count++;
				// 如果是第n个素数则开始进行求和相加 
				if(count >= n){
					sum += x;
				}
			}
			x++;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}
