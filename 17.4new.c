//10 June successed! 

#include <stdio.h>
#define N 10
//1234 2345 3456 5678 7890 9876 8765 7454 6543 5432 ¡ª¡ª1135676542
void cul(int x, int ass[]){
	int j,term;
	while(x){
		term = x%10;
		for(j = 0; j < N; j ++){
			if(term == j){
				ass[j] ++;
			}
		}
		x /= 10;
	}
}

int main(){
	
	int num[N];
	int i;
	for(i = 0; i < N; i ++){
		scanf("%d",&num[i]);
	}
	
	int ass[N] = {0};
	for(i = 0; i < N; i ++){
		cul(num[i],ass);
	}
	
	int max = ass[0];
	for(i = 0; i < N; i ++){
		if(max <= ass[i]){
			max = ass[i];
		}
	}
	
	int count = 0;
	for(i = 0; i < N; i ++){
		if(max == ass[i]){
			printf("%d ",i);
			count ++;
		}
	}printf("\n");
	
	if(count == 1){
		printf("it appears %d times",max);
	}else{
		printf("they appear %d times",max);
	}
	
		
	return 0;
}

