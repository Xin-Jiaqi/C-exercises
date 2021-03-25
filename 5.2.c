#include <stdio.h>

int function(int a,int b);

int main(){
	
	int x,y;
	scanf("%d,%d",&x,&y);
	
	int result;
	if(x > y){
		result = function(x,y);
	}
	else{
		result = function(y,x);
	}
	
	printf("%d",result);
	
	return 0;
} 

int function(int a,int b){
	int c = 1;	

	while(c != 0){
		c = a%b;
		a = b;
		b = c;
	}
	
	return a;
}
