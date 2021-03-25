#include <stdio.h>
#include <math.h>

int main(){
	
	int x,y;
	char z;
	scanf("%d %d %c",&x,&y,&z);
	
	int result,judge = 1;
	
	if(z == '+'){
		result = x + y;
	}else if(z == '-'){
		result = x - y;
	}else if(z == '*'){
		result = x * y;
	}else if(z == '/'){
		if(y == 0){
			printf("Divided by zero!");
			judge
		}else{
			result = x / y;
		}
	}else{
		printf("Invalid operator!");
	}
	
	printf("%d",result);
	
	return 0;
}
