#include <stdio.h> 
int main(void)
{
	double x;
	int a = 0;
	scanf("%lf",&x);
	if (x<0){
		a=1; 
	}
	else if (x=0){
		a=2;
	}
	else{
		a=3;
	}

	switch(a){
		case 1:
			printf("f=1\n");
			break;
		case 2:
			printf("f=0\n");
			break;
		case 3:
			printf("f=x\n");
			break; 
	};
	return 0;
}
