#include <stdio.h>
#include <math.h>

int main(){
	
	double t1,t2,L2;//这三个量分别是三个小问的所求量 
	
	double L,v,u;
	scanf("lf lf lf",&L,&v,&u);//输入已知量
	
	t1 = L / v;//飞船、飞船上的人、子弹在同一参考系
	
	double gama;
	double c = 3 * 1E8;
	gama = 1 / sqrt(1 - pow(u/c,2));//引入Γ(gama) 
	
	t2 = gama * t1;//时间延缓效应
	
	double L1;// L1为子弹飞行相对于飞船参考系的长度
	L1 = L;
	L2 = L1 / gama;// 长度收缩效应
	
	printf("%f %f %f \n",t1,t2,L2);
	
	return 0;
}
