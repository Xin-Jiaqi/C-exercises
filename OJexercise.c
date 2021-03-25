#include <stdio.h>
#include <math.h>

int main(){
	
	int a;
	scanf("%d",&a);
	
	int judge = 0;
	
	if(a % 4 == 0){
		if(a % 100 == 0 && a % 400 != 0){
		}else{
			if(a % 3200 != 0){
				judge = 1;
			}
		}
	}
	
	if(judge){
		printf("Y");
	}else{
		printf("N");
	}
	
	return 0;
}
