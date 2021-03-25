#include <stdio.h>
#include <string.h>

void DecToBin(int bin[], int n){
	
	
	int i = 0;
	while(n){
		bin[i] = n % 2;
		n /= 2;
		i ++;
	}
	printf("\n");
}

int main(){
	
	int x,y;
	scanf("%d,%d",&x,&y);
	
	int bin1[16] = {0};
	int bin2[16] = {0};
	
//	DecToBin(bin1,x);
	DecToBin(bin2,y);
	
	int i,count = 0;
	for(i = 0; i < 16; i ++){
		if(bin1[i] != bin2[i]){
			count ++;
		}
	}
	
	printf("%d",count);
	
	return 0;
}
