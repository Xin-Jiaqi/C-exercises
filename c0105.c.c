#include <stdio.h>

int main(){
	
	int a,b,c,d;
	b = 0; c = 0;
	
	while((a = getchar()) != '#'){
		if (a == ' '){
			b++;
		}
		if (a == '\n'){
			c++;
		}
	}
	
	printf("%d %d",b,c);
	
	return 0;
} 
