#include <stdio.h>

int main(){
	int n;
	int result = 1;
	int i;
	
	printf("plz enter your number:\n");
	scanf("%d",&n);
	
	for(i=n; i>=2; i--) {
		result *= i;
	}
	
	
	printf("the result is:%d",result);
}
