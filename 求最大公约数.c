#include <stdio.h>

int main(){
	int a;
	int b;
	scanf("%d %d",&a,&b);
	
	int max;
	int min;
	
	if(a != b){
		if(a>b){
			max = a;
			min = b;
		}else{
			max = b;
			min = a;
		}
		
		int s;
		s = max%min;
		
		while( s != 0 ){
			max = min;
			min = s;
			s = max%min;
		}
		printf("%d��%d�����Լ��Ϊ%d",a,b,min);
	}
	if( a == b){
		printf("%d��%d�����Լ��Ϊ%d",a,b,a);
	}
	
	return 0;
}
