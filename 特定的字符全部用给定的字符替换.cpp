//��һ���ַ������ض����ַ�ȫ���ø������ַ��滻���õ�һ���µ��ַ�����

//�������룺hello-how-are-you o O
//���������hellO-hOw-are-yOu
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
