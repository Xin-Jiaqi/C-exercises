#include <stdio.h>

int main(){
	
	int n,a,b,c,d;
	scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
	
	int score[] = {a,b,c,d};
	
	int number = 0;
	int i;
	for( i = 0; i < n; i ++){
		if (score[i] > 59){
			number ++;
		}
	}
	
	double rate;
	rate = 1.0*number/n;
	printf ("%.2f",rate);
	
	return 0;
}
