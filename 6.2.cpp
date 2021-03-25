#include <stdio.h> //82514 12548

void minmax(int a[], int len,int *max,int *min);

int main(){
	
	int n;
	scanf("%d",&n);
	
	int i = 0;
	int a[n];
	while (i < n){
		scanf("%d",&a[i]);
		i ++;
	}
	//读入数据 
	
	int max,min;
	minmax(a,n,&max,&min);//操作 
//	printf("%d %d",max,min);

	int j;
	printf("After swapped:");
	for (j = 0;j < (n-1); j++){
		printf("%d ",a[j]);
	}
	printf("%d",a[j]);
	//输出结果 
	
	return 0;
}

void minmax(int a[], int len,int *max,int *min){
	int i,p,q;
	*max = 0;
	*min = 0;
	p = q = a[0];
	
	for (i = 1; i < len; i ++){
		if(p < a[i]){
			p = a[i];
			*max = i;
		}
	}
	int x;
	x = a[len-1];
	a[len-1] = a[*max];
	a[*max] = x;
	
	for (i = 1; i < len; i ++){
		if(q > a[i]){
			q = a[i];
			*min = i;
		}
	}
	x = a[0];
	a[0] = a[*min];
	a[*min] = x;

}
