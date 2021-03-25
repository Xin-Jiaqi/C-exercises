//21 May
#include <stdio.h>
#include <string.h>

int main(){
	
	char s[20];
	scanf("%s",s);

	char keyword[32][10]={"auto", "break", "case", "char", "const", 
		"continue", "default", "do", "double", "else",
		"enum", "extern", "float", "for", "goto",
		"if", "int", "long", "register", "return",
		"short", "signed", "sizeof", "static", "struct", 
		"switch", "typedef", "union", "unsigned", "void", 
		"volatile", "while"};
	
	int judge = 1;
	int i;
	for(i = 0; i < 32; i ++){
		if(s == keyword[i]){
			judge = 0;
			break;
		}
	}
	
	if(judge){
		if(s[0] >= '0' && s[0] <='9'){
			judge = 0;
		}
		for(i = 0; i < strlen(s); i++){
			if((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <= 90) ||(s[i] >= 97 && s[i] <= 122) ||(s[i] == 95)){
			}else{
				judge = 0;
				break;
			}
		}
	}
	
	if(judge){
		printf("yes");
	}else{
		printf("no");
	}
	

	return 0;
} 
