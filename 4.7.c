#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int count = 0;
	int n1 = n;
	while( n1 != 0 ){
		n1 /= 10;
		count ++;
	}
	
	int i;
	int term[count];
	
	for (i = 0; i < count; i ++){
		term[i] = n % 10;
		n /= 10;
	}
	
	int j,k;
	for (j = 1; j <= count; j ++){
		k = count - j;
		printf("%d,",term[k]);
	}
	
	return 0;
}
