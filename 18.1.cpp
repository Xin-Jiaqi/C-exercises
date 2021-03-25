#include <stdio.h>
#include <string.h>

int main(){
	
	int x;
	scanf("%d",&x);
	
	int r;
	if(x < 500){
		r = 0;
	}else if(x >= 500 && x < 1000){
		r = 3;
	}else if(x >= 1000 && x < 2000){
		r = 5;
	}else if(x >= 2000 && x < 5000){
		r = 8;
	}else{
		r = 12;
	}
	
	
	double a,b;
	a = 0.01 * x * r;
	b = x - a;
	printf("%.2f,%.2f",a,b);

	
	return 0;
}


