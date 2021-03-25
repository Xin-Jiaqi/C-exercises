#include <stdio.h>
#include <math.h>

int main(){
	double x;
	int n;
	printf("let us go!\n");
	scanf("%lf %d",&x,&n);
	
	double result = 0;
	int i,u,a,b = 1;
	
	for (i = 0; i < n; i ++){
		a = pow(x,i);
		if (i = 0){
			b=1;
		}else{
			for (u = 1; u < (i+1); u ++){
			b *= u;
		}
		}

		result += a/b;
	}
	
	printf("%.6",result);
	
	return 0;
}
