//21 May 
#include <stdio.h>
#include <string.h>

int main( ){
	
	char s[31],a,b;
	scanf("%s %c %c",s,&a,&b);
	
	int i;
	for(i = 0; i < strlen(s); i++){
		if(s[i] == a){
			s[i] = b;
		}
	}
	
	puts(s);
	
    return 0;
}

