#include <stdio.h>

int countdigit(int number,int digit);

int main(){
	
	int a,b;
	scanf("%d,%d",&a,&b);
	
	printf("Number of digit %d:%d",b,countdigit(a,b));
	
	return 0;
}

int countdigit(int number,int digit){
	int c = 0;
	int term = 1;
	while (number){
		term = number % 10;
		number /= 10;
		if (term == digit){
			c ++;
		}
	}
	
	return c;
}
