//8 june 
#include <stdio.h>
#include <math.h>

int main(){
	
	double x;
	scanf("%lf",&x);
	
	double f;
	
	if(x < -2){
		f = pow(x+1,2) + 2*x + 1/x;
	}else if(x>=-2 && x <= 2){
		f = pow(2,x) + x;
	}else{
		f = pow(x,0.5);
	}
	
	printf("%.2f",f);
	
	return 0;
}
