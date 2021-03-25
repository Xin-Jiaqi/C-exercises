//输入一个正整数n,计算1 - 1/4 +1/7 -1/10 +1/13 -1/16+
//............的前n项之和，输出时保留3位小数

#include <stdio.h>
int main(){
	double i = 1.0;
	int n;
	double sign = 1.0;
	double sum = 0;
	int count = 0;
	
	scanf("%d",&n);
	
	for (count = 0; count <n; count ++ ){
		sum += sign/i;
		i = (i+3.0);
		sign = - sign;
	}
	
	printf("sum=%.3f",sum);
	
	return 0;
}
