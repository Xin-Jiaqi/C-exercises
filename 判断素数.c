#include <stdio.h>

int main()
{
	int x;
	int i = 2;
	int t;//t为余数
	int n = 0;//n用来计数 
	
	printf("plz enter your 素数：");
	scanf("%d",&x);
	
	for( i = 2; i < x; i ++){
		t = x % i;
		if (t = 0){
			n ++;
		}
	}
	
	if (n != 0){
		printf("it is not a 素数");
	}
	else{
		printf("it is a 素数");
	}
	
	return 0;
}
