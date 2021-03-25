//【问题描述】求1-1/2+2/3-3/5+5/8-8/13+……前n(1≤n≤35)项的和，n由键盘输入，输出结果保留6位小数。
//【输入形式】输入项数n
//
//【输出形式】输出和值
//【样例输入】21
//【样例输出】1.195956

#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int i;
	double result = 1;
	
	if(n == 1){
		result = 1;
	}else if(n == 2){
		result = 1/2;
	}else{
		int term[n];
		term[0] = 1;
		term[1] = 2;
		for(i = 2; i < n; i ++){
			term[i] = term[i-1]+term[i-2];
		}
		for(i = 1;i < n; i ++){
			result += pow(-1.0,i)*term[i-1]/term[i];	
		}
	}
	printf("%.6f",result);
	
	return 0;
}
