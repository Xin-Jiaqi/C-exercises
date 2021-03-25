#include <stdio.h>

int factorsum(int number);

int main(){
	int m,n;
	scanf("%d,%d",&m,&n);
	int x;
	for (x = m; x <=n; x ++){
		if (factorsum(x)){
			printf("%d ",x);
		}
	}
	
	return 0;
}

int factorsum(int number){
	int sum = 1;
	int i,j;
	int result = 1;
	if (number != 1){
		for (i = 2; i < number; i ++){
			j = number % i;
			if (j == 0){
				sum += i;
			}
		}
		if (number != sum){
			result = 0;
		}
	}
	else{
		result = 0;
	}
	return result;
}
