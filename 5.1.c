#include <stdio.h> 
#include <math.h>

double fact(int n);
double multi(int n); 

int main(void){ 
	int i; 
	double sum, item, eps;
	eps = 1E-6;
	sum = 1;
	item = 1;
	for(i = 1; fabs(item) >= eps; i++){	
		item = (1.0*fact(i))/ (1.0*multi(2 * i + 1));
		sum = sum + item;
	}     /* 调试时设置断点 */
	printf("PI = %0.5lf\n", sum * 2);
	return 0;
}

double fact(int n)   
{ 
	int x;
	double res1;   
	res1 = 1;
	for(x = 1; x <= n; x++){
		res1 = res1 * x;
	}
	
	return res1;   /* 调试时设置断点 */
}

double multi(int n)  
{ 
	int y;
	double res2;  
	res2 = 1;
	for(y = 1; y <= n; y = y + 2){
		res2 = res2 * y;
	}
	return res2;   /* 调试时设置断点 */
}
