#include <stdio.h>
#include <math.h>

int main(){
	
	double u;
	u = 0.982;
	
	double x,y,z;
	x = pow(u,2);
	y = sqrt(1 - x);
	z = (1 / y) * 2.00 * (1E-6);
	
	printf("%.9f",z);
	
//�����1.059*1E-5�� 
	
	return 0;
}
