//8 June 9 june failed 
#include <stdio.h>
#define N 10

void calculate(int a[], int *count, int number[]){
	int i,j;
	int b[N];
	for(i = 0; i < N; i ++){
		for(j = 0; j < N; j ++){
			if(a[i] && a[i]%10 == j){
				b[j] ++;
				a[i] /= 10;
			}
		}
	}
	int max = b[0];
	for(i = 0; i < N; i ++){
		if(b[i] > max){
			max = b[i];
		}
	}
	*count = max;
	for(i = 0; i < N; i ++){
		if(max == b[i]){
			number[i] = i;
		}
	}
} 

int main(){
	
	int a[N];
	int i;
	for(i = 0; i < N; i ++){
		scanf("%d",&a[i]);
	}
	
	int count,number[N]={0};
	
	for(i = 0; i < N; i ++){
		calculate(a,&count,number);
	}
	for(i = 0; i < N; i ++){
		if(number[i]){
			printf("%d,",number[i]);
		}
	}
	printf("\n");
	
	printf("%d",count);
	
	return 0;
}
