#include <stdio.h>

int main()
{
	int x;
	int i = 2;
	int t;//tΪ����
	int n = 0;//n�������� 
	
	printf("plz enter your ������");
	scanf("%d",&x);
	
	for( i = 2; i < x; i ++){
		t = x % i;
		if (t = 0){
			n ++;
		}
	}
	
	if (n != 0){
		printf("it is not a ����");
	}
	else{
		printf("it is a ����");
	}
	
	return 0;
}
