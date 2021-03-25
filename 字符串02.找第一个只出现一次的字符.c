#include <stdio.h>
#include <string.h>

void find(char string[],int n);

int main(){
	
	char string[100000];
	gets(string);//读入字符串

	find(string,strlen(string));//找第一个只出现一次的字符 并输出 
	
	return 0;
}

void find(char string[],int n){//abcabd
	int i,j;
	int is_OK = 1;
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			if(j == i){
			}else{
				if(string[i] == string[j]){
					is_OK = 0;
					break;
				}
			}
		}
		if(is_OK){
			printf("%c",string[i]);
			break;
		}
		if(i != n-1){
			is_OK = 1;
		}else{
			printf("no");
		}

	}
}
