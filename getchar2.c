#include<stdio.h>
#include<conio.h>

main(void){
	int c;
	int a;
	a = getchar();
	
	if(EOF != a){
		printf("%c",a);
	}
	
	while((c = getchar()) != '\n'){
		if (EOF == a){
			break;
		}
		printf("%d",c);
	}
	getchar();
}
