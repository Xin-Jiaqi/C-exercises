#include <stdio.h>

double fact(int number);

int main(){
	
	int m,n;
	scanf("%d,%d",&m,&n);
	
	int result;
	result = fact(n) / (fact(m)*fact(n-m));
	printf("result=%d",result);
	
	return 0;
}

double fact(int number){
	
	double x = 1;
	int i;
	
	for (i = 1; i <= number; i ++){
		x *= i;
	}
	
	return x;
}
