#include <stdio.h>
#include <math.h>

int main(){
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	
	int a,b,c,d;
	float e;
	a = fabs(x1-x2);
	b = pow(a,2);
	c = fabs(y1-y2);
	d = pow(c,2);
	e = sqrt(b + d);
	printf("%1.2f\n",e);
	
	return 0;
}
