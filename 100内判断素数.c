#include <stdio.h>

int main()
{
	int x;

	for(x = 1; x <= 100; x ++){
		
		int i = 2;
		int t;//tΪ����
		int n = 1;//n�����ж� 
		
		
		for( i = 2; i < x; i ++){
			t = x % i;
			if (t = 0){
				n = 0;
				break;
			}
		}
		
		if (n = 1){
			printf("%d\n",x);
		}
	}
	
	return 0;
}
