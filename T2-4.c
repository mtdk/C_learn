#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
    
    int n;
    scanf("%d", &n);
    int i,j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i > n / 2) {
                if (j > n / 2) {//���½�
                    int temp;
                    {
						if(i>j){
                    	temp=1+n-i;
						}else{
							temp=1+n-j;
						}
     				}
                    if (temp % 2 == 1) {
                        printf("%c", 'A');
                    } else {
                        printf("%c", 'B');
                    }
                } else {//���½�
                    int temp;
                    {if(1 + n - i > j)
     temp=j;
     else
     temp=1+n-i;
     }
                    if (temp % 2 == 1) {
                        printf("%c", 'A');
                    } else {
                        printf("%c", 'B');
                    }
                }
            } else {
                if (j > n / 2) {//���Ͻ�
                    int temp ;
                    {if (i<1 + n - j)
                    temp=i;
                    else
                    temp=1+n-j;
     }
                    if (temp % 2 == 1) {
                        printf("%c", 'A');
                    } else {
                        printf("%c", 'B');
                    }
                } else {//���Ͻ�
                    int temp;
                    {if(i<j)
                    temp=i;
                    else
                    temp=j;
     }
                    if (temp % 2 == 1) {
                        printf("%c", 'A');
                    } else {
                        printf("%c", 'B');
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
