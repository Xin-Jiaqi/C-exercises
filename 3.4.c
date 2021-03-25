#include <stdio.h>
#include <math.h>

int main(){
	int a,n,result = 0;
	int i,limit,x;
	int b = 0;
	scanf("%d %d",&a,&n);
	
	for (x = 1; x <= n; x ++){
		limit = pow(10,x);
	
		for (i = 1; i < limit; i *= 10){
			b += a*i;
		}
		
		result += b;
		b = 0;
	}
	
	printf("%d",result);
	
	return 0;
}
