#include <stdio.h>  //my attempt this time is too complicated

int main(){
	int number;
	scanf("%d",&number);
	int number1 = number;
	int number2 = number; 
	
	int term1,term2;
	int count = 0;
	const int DIVISOR = 10;
	
	while(number1 != 0){
		term1 = number1 % DIVISOR;
		number1 /= DIVISOR;
		printf("%d",term1);
		
		if (number1 != 0){
			printf(" ");
		}
		else{
			printf("\n");
		}
	}
	
	while(number2 != 0){
		term2 = number2 % DIVISOR;
		number2 /= DIVISOR;
		
		if (count == 0){
			if ( term2 == 0){
			}
			else{
				printf("%d",term2);
			}
		}
		else{
			printf("%d",term2);
		}
		
		if (number2 == 0){
			printf("\n");
		}
		
		count ++;
	}
	
	printf("%d",count);
	
	return 0;
} 
