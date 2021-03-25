#include <stdio.h>

int main(){

	int i = 0;
	int p;
	p = (int)&i;

	printf("0x%x\n",p);
	
	return 0;
}
