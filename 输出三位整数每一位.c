#include <stdio.h>

int main(){
	int x;
	int a;
	int b;
	int c;
	
	scanf("%d",&x);
	a = x%10;
	x /= 10;
	b = x%10;
	x /= 10;
	c = x%10;
	
	printf("%d,%d,%d",a,b,c);
	
	return 0;	
}
