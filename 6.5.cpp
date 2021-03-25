#include <stdio.h>

void find(int a[], int len, int *p, int *q);

int main(){
	
	int n;
	scanf("%d",&n);
	
	int a[n];
	int i;
	for (i = 0; i < n; i ++){
		scanf("%d",&a[i]);
	}//输入 
	
	int p,q;
	find(a,n,&p,&q);//找数  p是数字 q是出现的次数 
	
	printf("%d appears %d times",p,q);
	//输出 
	
	return 0;
} 

void find(int a[], int len, int *p, int *q){
	int i,j;
	int b[10] = {0};//b数组用来计数 
	for (j = 0; j < len; j ++){//遍历a中所有数字 
		for (i = 0; i < 10; i ++){//一一比较 
			if(i = a[j]){
				b[i] ++;
				break;
			}
		}
	}
	
	int t = 0;
	for (i = 1; i < 10; i ++){
		if (b[i] > b[t]){
			t = i;
		}
	}//找b中最大 
	
	*p = t;
	*q = b[t];
}
