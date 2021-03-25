//25 May, failed,don't know why.
#include <stdio.h>
#include <string.h>

void arrange(char np[][20], int n){
	int j,k;
	for(j = 0; j < n; j ++){
		if(np[j][0] <= 'z' && np[j][0] >= 'a'){
			np[j][0] += 'A' - 'a';
		}//首字母大写 
		for(k = 1; k < strlen(np[j]); k ++){
			if(np[j][k] >= 'A' && np[j][k] <= 'Z'){
				np[j][k] += 'a' - 'A';
			}
		}//其他字母小写 
	} 
}
//4
//AspiRin
//cisapride
//2-PENICILLIN
//Cefradine-6

//Aspirin
//Cisapride
//2-penicillin
//Cefradine-6

int main(){
	
	int n;
	scanf("%d",&n);
	
	char np[n][20];
	
	int i;
	for(i = 0; i < n; i ++){
		scanf("%s",np[i]);
	} 
	
	arrange(np,n);
	
	for(i = 0; i < n; i ++){
		printf("%s\n",np[i]);
	} 
	
	return 0;
}
