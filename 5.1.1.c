#include <stdio.h>

int main()   
{ 
	int n;
	scanf("%d",&n);	
	
	int x;
	int res1 = 1;   

	for(x = 1; x <= n; x++){
		res1 *= x;
	}
	
	printf("%d",res1);
	
	return 0;   /* 调试时设置断点 */
}

