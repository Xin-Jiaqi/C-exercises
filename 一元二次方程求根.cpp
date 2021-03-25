#include <stdio.h>
#include <math.h>

int main(){
	
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double x1,x2;
	
	int delta = pow(b,2) - 4 * a * c;
	if(delta == 0){
		printf("x1=x2=%f",(-b + sqrt(b*b-4*a*c))/(2*a));
	}else if(delta > 0){
		printf("x1=%f;x2=%f",(-b + sqrt(b*b-4*a*c))/(2*a),(-b - sqrt(b*b-4*a*c))/(2*a));
	}else if(delta < 0){
		printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",-b / (2*a),sqrt(4*a*c-b*b) / (2*a),-b / (2*a),sqrt(4*a*c-b*b) / (2*a));
	}
	
	return 0;
}
