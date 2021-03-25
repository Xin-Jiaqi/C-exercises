#include <stdio.h>
#include <math.h>

int main(){
	
	int postage = 8;
	int weight;
	char timing;
	scanf("%d %c",&weight,&timing);
	
	if(timing == 'y'){
		postage += 5;
	}//¼Ó¼±¼Ó5¿é
	
	if(weight > 1000){
		int i = 1;
		while((weight - 1000) > i*500){
			i ++;
		}
		postage += i * 4;
	}
	
	printf("%d",postage);
	
	return 0;
}
