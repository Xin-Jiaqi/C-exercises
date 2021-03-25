#include <stdio.h>
#include <math.h>

int main(){
	
	int m,n,number,number1,number2;
	scanf("%d %d",&m,&n);
	int x = 0;
	int shuixian = 0;
	
	for(number = m; number < n; number ++){
		
		number1 = number;
		do{
			number1 /= 10;
			x ++;
		}while(number1 > 0);
		
		number2 = number;
		int figure[x];
		int i;
		for (i = 0; i < x; i ++){
			figure[i] = number2 % 10;
			number2 /= 10;
			shuixian += pow(figure[i],i+1);
		}
		
		if (shuixian == number){
			printf("%d\n",number);
		}
	}
	
	return 0;
}
