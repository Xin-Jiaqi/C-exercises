#include<stdio.h>
int main( ){

 	char a[80];
    gets(a);
	
	int i;
	for (i = 0; i < sizeof(a)/sizeof(a[0]); i ++){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i] = 'A' + 'Z' - a[i];
		}
	}
	puts(a);

    return 0;
}

