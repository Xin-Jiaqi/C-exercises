//21 May
#include <stdio.h>
#include <string.h>

int main( ){
	
	char s1[256];
	gets(s1);
	
	char s2[strlen(s1)];
	int i;
	for(i = 0; i < strlen(s1); i ++){
		if(s1[i] == 'A'){
			s2[i] = 'T';
		}else if(s1[i] == 'T'){
			s2[i] = 'A';
		}else if(s1[i] == 'C'){
			s2[i] = 'G';
		}else if(s1[i] == 'G'){
			s2[i] = 'C';
		}
	}
	s2[i] = '\0';
	
	puts(s2);
	
    return 0;
}
//TATACCTACCACAAACCGAGAC 
//TATACCTACCACAAACCGAGAC 

