#include <stdio.h>
#include <math.h>

int main(){
	
	double gama;
	double c = 3 * 1E8;
	double u = 0.6 * c;
	gama = 1 / sqrt(1 - pow(u/c,2)); //�����(gama) 
	
	double t1;
	t1 = 60 / (0.8 * c); //�ӵ�������ɴ������������ɴ����е�ʱ�� 
	
	double t2 = t1 * gama; //ʱ���ӻ�ЧӦ 
	
	printf("%.10f",gama * ); 
	
	
	return 0;
}
