#include <stdio.h>
#include <math.h>

int main(){
	int n;
	double x;
	scanf("%lf   %d",&x,&n);
	
	int i;
	double result = 1.0;
	double term;
	double a = 1.0;
	for ( i = 1; i <= n; i ++ ){
		a *= x/i;
		result += a;
	}
	printf("%.6lf\n",result);
	
	return 0;
}
