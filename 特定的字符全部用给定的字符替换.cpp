//把一个字符串中特定的字符全部用给定的字符替换，得到一个新的字符串。

//样例输入：hello-how-are-you o O
//样例输出：hellO-hOw-are-yOu
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
