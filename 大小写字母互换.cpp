//��һ���ַ��������г��ֵĴ�д��ĸ���滻��Сд��ĸ��ͬʱ��Сд��ĸ�滻�ɴ�д��ĸ��

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
