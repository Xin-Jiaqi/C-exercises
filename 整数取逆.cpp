#include <stdio.h>

int main(){
	int a = 0;
	int result = 0;
	int n = 0;
	int x;
	scanf("x");
	
	if(x/10 != 0){
	a = x%10;
	x /= 10;
	result  = a;
	}
	
	while(x != 0){
		n ++;
		a = x%10;
		result += a *(10*n);
		x /= 10;
	}
	
	printf("%d",result);
	
	return 0;
}
