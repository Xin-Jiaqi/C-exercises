#include <stdio.h>

int main(){
	
	float a;
	printf("inch = ");
	scanf("%lf\n",&a);
	
	float b;
	b = a / 2.54;
	printf("centimeter = %.2f",b);
	
	return 0;
}
