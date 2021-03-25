//21 May
#include <stdio.h>
#include <string.h>

int main(){
	
	char s[100];
	gets(s);
	
	char s1[strlen(s)];
	
	int i;
	for(i = 0; i < strlen(s)-1; i ++){
		s1[i] = s[i] + s[i+1];
		printf("%c",s1[i]);
	}
	s1[i] = s[i] + s[0];
	printf("%c",s1[i]);
		
	return 0;
} 
