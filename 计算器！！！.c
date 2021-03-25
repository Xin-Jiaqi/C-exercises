#include <stdio.h>
#include <math.h>

int main(){
	
	double gama;
	double c = 3 * 1E8;
	double u = 0.6 * c;
	gama = 1 / sqrt(1 - pow(u/c,2)); //引入γ(gama) 
	
	double t1;
	t1 = 60 / (0.8 * c); //子弹在宇宙飞船上相对于宇宙飞船飞行的时间 
	
	double t2 = t1 * gama; //时间延缓效应 
	
	printf("%.10f",gama * ); 
	
	
	return 0;
}
