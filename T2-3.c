#include <stdio.h>

int main(){
	
	int x,y,z,n;
	
	n=8;
//	printf("%d",5%2);
	for(x=1;x<=n;x++){
		for(y=1;y<=n;y++){
			if(x==1||x==n||y==1||y==n){
				printf("A");
			}else if((x==2&&y==2)||(x==n-1&&y==n-1)){
				printf("B");
			}else if(y%2==0 && y<n/2){
					printf("B");
			}else if(y%2==0 && y>n/2){
				printf("B");
			}else if(y%2!=0 && y<n/2){
				printf("A");
			}else if(y%2!=0 && y>n/2){
				printf("B");
			}
			else{
				printf("A");
			}
		}
		printf("\n");
	}
}
