#include <stdio.h>
#include <math.h>

int main(){
	
	double t1,t2,L2;//���������ֱ�������С�ʵ������� 
	
	double L,v,u;
	scanf("lf lf lf",&L,&v,&u);//������֪��
	
	t1 = L / v;//�ɴ����ɴ��ϵ��ˡ��ӵ���ͬһ�ο�ϵ
	
	double gama;
	double c = 3 * 1E8;
	gama = 1 / sqrt(1 - pow(u/c,2));//���릣(gama) 
	
	t2 = gama * t1;//ʱ���ӻ�ЧӦ
	
	double L1;// L1Ϊ�ӵ���������ڷɴ��ο�ϵ�ĳ���
	L1 = L;
	L2 = L1 / gama;// ��������ЧӦ
	
	printf("%f %f %f \n",t1,t2,L2);
	
	return 0;
}
