#include <stdio.h>

int main(){
	int n;
	int result = 1;
	int i = n;
	
	printf("plz enter your number:\n");
	scanf("%d",&n);
	
	for( ;n>=2; n--) {
		result *= n;
	}
	
	
	printf("%d! is:%d",i,result);
}
