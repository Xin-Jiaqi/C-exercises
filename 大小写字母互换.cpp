//把一个字符串中所有出现的大写字母都替换成小写字母，同时把小写字母替换成大写字母。

#include <stdio.h>
#include <string.h>

void change(char str[], int n){
	int i;
	for(i = 0; i < n; i ++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] += ('A' - 'a');
		}else if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += ('a' - 'A');
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
