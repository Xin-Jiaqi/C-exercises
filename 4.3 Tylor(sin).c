#include <stdio.h>

int main(){
	double x;
	scanf("%lf",&x);
	
	const int N =10;
	
	int i,j;
	int sign = 1;
	double term = 1;
	double result = 0;
	for (i = 1; i <=(2*N - 1); i += 2){
		for (j = 1; j <= i; j ++){
			term *= x / j;
		}
		result += term;
		sign = -sign;
		term = sign;
	}
	
	printf("sin(x)=%.2f",result);
	
	return 0;
} 
