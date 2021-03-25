//8 June
#include <stdio.h>
#include <string.h>

int main(){
	
	char s[100];
	gets(s);
	
	int i,j;
	for(i = 0,j = 0; i < strlen(s); i ++){
		if(s[i] >= '0' && s[i] <= '9'){
		}else{
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i] += 'A' - 'a'; 
			}
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
	puts(s);
	
	return 0;
}
