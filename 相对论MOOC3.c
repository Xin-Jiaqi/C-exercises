#include <stdio.h>
#include <math.h>

int main(){
	
	double gama;
	double c = 3 * 1E8;
	double u;
	scanf("%lf",&u);
	gama = 1 / sqrt(1 - pow(u/c,2));
	
	double L; //ԭ��
	double L1; //���󳤶ȣ�Ҳ��������г��ο�ϵ�ĳ���
	scanf("lf",&L,&L1);
	
	L1 = L / gama; //���ó���������ʽ 
	
	printf("%.9f",L1); 
	
	return 0;
}
