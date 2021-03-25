#include <stdio.h>
#include <math.h>

int main(){
	
	double gama;
	double c = 3 * 1E8;
	double u;
	scanf("%lf",&u);
	gama = 1 / sqrt(1 - pow(u/c,2));
	
	double L; //原长
	double L1; //所求长度，也就是相对列车参考系的长度
	scanf("lf",&L,&L1);
	
	L1 = L / gama; //利用长度收缩公式 
	
	printf("%.9f",L1); 
	
	return 0;
}
