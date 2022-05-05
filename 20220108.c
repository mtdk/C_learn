#include <stdio.h>

int main(int argc, char *argv[]){
	void display2(int n);
	
	display2(11); printf("\n");
	//display2(-11); printf("\n");
	
	return 0;
}

void display2(int n){
	int i;
	for(i=31;i>=0;i--,printf("%s",i%8==7? " ":""))
		printf("%c",n&(1<<i)? '1':'0');
}
