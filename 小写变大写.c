//25 May
#include <stdio.h>
#include <string.h>

void change(char str[], int n){
	int i;
	for(i = 0; i < n; i ++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] += ('A' - 'a');
		}
	}
}

int main(){
	
	char str[100];
	gets(str);
	
	change(str,strlen(str));
	
	puts(str);
	
	return 0;
}
