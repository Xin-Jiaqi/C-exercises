#include <stdio.h>

int main(){
	
	int a,b;
	scanf("%d/%d",&a,&b);
	
	int c,d;
	
	int i;
	for (i = 2; i <= a && i <= b; i ++){
		if ( a % i == 0 && b % i == 0){
			c = a / i;
			d = b / i;
		}
		else{
			c = a;
			d = b;
		}
	}
	
	printf("%d/%d",c,d);
	
	return 0;
} 
