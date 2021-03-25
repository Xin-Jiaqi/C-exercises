//21 May,dont know where is wrong.
//23 May,done
#include <stdio.h>
#include <string.h>

int main(){
	
	char message[80];
	gets(message);
	
	int i;
	for(i = 0; i < strlen(message); i ++){
		if(message[i] == 'Z'){
			message[i] = 'A';
		}else if(message[i] == 'z'){
			message[i] = 'a';
		}else if(message[i] <= 'Y' && message[i] >= 'A' || message[i] <= 'y' && message[i] >= 'a'){
			message[i] += 1;
		}
	}
	
	message[strlen(message)] = '\0';
	
	puts(message);
	
	return 0;
}
//Hello! How are you!
//Ifmmp! Ipx bsf zpv!
//Ifmmp! Ipx bsf zpv! 
