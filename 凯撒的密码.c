//23 May
#include <stdio.h>
#include <string.h>

int main(){
	
	char code[200];
	gets(code);
	
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	int i,j;
	for(i = 0; i < strlen(code); i ++){
		for(j = 0; j < strlen(alphabet); j ++){
			if(code[i] == alphabet[j] && j >= 5){
				code[i] = alphabet[j - 5];
				break;
			}else if(code[i] == alphabet[j]){
				code[i] = alphabet[strlen(alphabet) + j - 5];
				break;
			}
		}
	}
	
	puts(code);
	
	return 0;
}
