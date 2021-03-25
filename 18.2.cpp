#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	double x;
	scanf("%d %lf",&n,&x);
	
	double S = 1;
	int y = 0;
	int i,j;
	for(i = 1; i < n; i ++){
		for(j = 1; j <= i+1; j ++){
			y += j;
		}
		S += pow(x,i) / y;
		y = 0;
	}
	printf("%.6f",S);
	
	return 0;
}


