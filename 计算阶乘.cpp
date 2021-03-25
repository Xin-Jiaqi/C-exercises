#include <stdio.h>

int main(){
	int n;
	int result = 1;
	
	printf("plz enter your number:\n");
	scanf("%d",&n);
	
	while(n != 0){
		result *= n;
		n --;
	}
	printf("the result is:%d",result);
}
