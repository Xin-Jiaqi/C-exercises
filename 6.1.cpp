#include <stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int a[n];
	int i = 0;
	int sum = 0;
	while(i < n){
		scanf("%d",&a[i]);
		sum += a [i];
		i ++;
	}
	printf("average=%.2f",(float)sum/n);
	
	return 0;
}
