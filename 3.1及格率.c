#include <stdio.h>
int main(){
	int number = 0;
	printf("plz enter your number:");
	scanf("%d",&number);

	int i = 0;
	int A = 0;
	double rate = 0;
	
	while (i < number){
		int score = 0;
		printf("plz enter %d student's score:",i+1);
		scanf("%d",&score);
		if (score > 59){
			A ++;
		}
		i++;
	}
	
	rate = (0.1*A)/number;
	printf("%.2f",rate);
	
	return 0;
}
