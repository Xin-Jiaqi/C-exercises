//输入一行字符，统计出其中数字字符的个数。

#include <stdio.h>
#include <string.h>

int count(char string[],int n);

int main(){
	
	char string[255];
	gets(string);
	
	printf("%d",count(string,strlen(string)));
	
	return 0;
}

int count(char string[],int n){

	int cnt = 0,i;
	for(i = 0; i <= n; i ++){
		if(string[i] <= '9' && string[i] >= '0'){
			cnt ++;
		}
	}
	
	return cnt;
}
