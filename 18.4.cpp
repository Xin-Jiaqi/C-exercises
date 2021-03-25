#include <stdio.h>
#include <string.h>

void sort(char s[],int n){
	int i,j,t;
	for(i = 0; i < n-1; i ++){
		for(j = 0; j < n-1-i; j ++){
			if(s[j] > s [j+1]){
				t = s[j+1];
				s[j+1] = s[j];
				s[j] = t;
			}
		}
	}
}

void delchar(char s[], int n){
	int i,j,k = 0;
	for(i = 0; i < n ; i ++){
		if(s[i]){
			s[k++] = s[i];
			for(j = i+1; j < n; j ++){
				if(s[i] == s[j]){
					s[j] = '\0';
					}
			}
		}
	}
	s[k] = '\0';
}

int main(){
	
	char s[80];
	gets(s);
	
	sort(s,strlen(s));
	delchar(s,strlen(s));
	
	puts(s);
		
	return 0;
}


