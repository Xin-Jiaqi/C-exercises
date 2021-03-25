//25 May, failed, dont't know why 
#include <stdio.h>
#include <string.h> 

void breaker(char secret[], int n);
//GSOOWFASOq
//Trvdizrrvj

int main(){
	
	char secret[50];
	gets(secret);
	
	breaker(secret, strlen(secret));
	
	puts(secret);
	
	return 0;
}

void breaker(char secret[], int n){
	int i;
	for(i = 0; i < n; i ++){
		if(secret[i] >= 'a' && secret[i] <= 'z'){
			secret[i] += ('A' - 'a');
		}else if(secret[i] >= 'A' && secret[i] <= 'Z'){
			secret[i] += ('a' - 'A');
		}
	}//大小写反转 
	
	char secret1[n];
	for(i = 0; i < n; i ++){
		secret1[i] = secret[n-i-1];
	}//逆序
	
	for(i = 0; i < n; i ++){
		secret1[i] += 3;
	}//右移 
	
	for(i = 0; i < n; i ++){
		secret[i] = secret1[i];
	}
}
