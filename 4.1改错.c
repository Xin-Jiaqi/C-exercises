#include<stdio.h>

int main(void){
	
	double e,item;
	int i,j,n;
	scanf("%d",&n);
	
	e = 1;
	item = 1;
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++){
			item *= j;      
			}
		e += 1.0 / item;      /*����ʱ���öϵ�*/
		item = 1;	
	}
	
	printf("e = %.4f\n",e);       /*����ʱ���öϵ�*/
	
	return 0;
}
