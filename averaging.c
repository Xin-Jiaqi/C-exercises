#include <stdio.h>

int main(){
	int count = 0;
	int sum = 0;
	int result = 0;
	int judge = 0;
	
	do{
		count ++;
		int x;
		
		printf("please enter your %d number£º%d",count,x);
		scanf("%d",&x);
		x
		sum += x;
		result = sum/count;
		
		printf("Have you done?\n(yes:1	no:0):%d",judge);
		scanf("%d",&judge);
	}while(judge == 0);
	
	printf("The result is %d",result);
}
