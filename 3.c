#include <stdio.h>
#include <string.h>

void del(char s[],int m){
	int j,k;
	for(j = 0,k = 0; j < m; j ++){
		if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')){
			s[k++] = s[j];
		}
	}
	s[k] = '\0';
}//去掉非字母字符 

int main(){
	
	int n;
	scanf("%d",&n);
	
	char table[n][80];
	
	int i;
	for(i = 0; i < n; i ++){
		scanf("%s",&table[i]);
		del(table[i],strlen(table[i]));
		printf("%s",table[i]);
		printf("\n");
	}


	return 0;
}
//【输入样例】
//2
//12Ab3Cd*aAbcdEeF
//&***dfg9)%
//
//【输出样例】
//AbCdaAbcdEeF
//dfg
