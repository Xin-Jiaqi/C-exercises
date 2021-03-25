//8 june
#include <stdio.h>
#include <math.h>

double mycos(double x, double e){
	double cos = 1;
	double a = 1,b;
	int i = 2,j,k;
	do{
		for(j = 1; j <= i; j ++){
			a *= j; 
		}
		k = i/2;
		b = pow(-1,k) * pow(x,i) / a;
		cos += b;
	}while(fabs(b) >= e);
	
	return cos;
}

int main(){
	
	double e;
	scanf("%lf",&e);
	double x;
	scanf("%lf",&x);
	
	printf("%f",mycos(x,e));
	
	return 0;
}
