//happy new year
//a
//hppy new yer
#include <stdio.h>

void squeeze(char s[],char c){  
    int i,j;  
    for (i = 0, j = 0; s[i] != '\0'; i++)  
    {  
        if (s[i] != c)  
        {  
            s[j++] = s[i];  
        }  
    }  
    s[j] = '\0';//这一条语句千万不能忘记，字符串的结束标记  
}  

int main(int argc, char const *argv[]){
	
	char s[100];
	gets(s);
	
	char d;
	scanf("%c",&d);
	
	squeeze(s,d);
	
	puts(s);
	
	return 0;
	
}
