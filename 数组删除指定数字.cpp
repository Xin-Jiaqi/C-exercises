//5
//1 3 4 5 2
//3

//1 4 5 2

#include <stdio.h>

void dele(int a[], int n, int *cnt, int del);
int main(){
	
	int len;
	scanf("%d",&len); 
	
	int a[len];
	int i;
	for(i = 0; i < len; i ++){
		scanf("%d",&a[i]);
	}
	
	int del;
	scanf("%d",&del);
	//读入工作 
	
	int cnt = 0;
	dele(a,len,&cnt,del);//进行删除
	
	printf("after delete:\n");
	if(cnt){
		for(i = 0; i < cnt-1; i ++){
			printf("%d ",a[i]);
		}
		printf("%d",a[i]);
	}else{
	}
	//输出工作 
	
	
	return 0;
}
void dele(int a[], int n, int *cnt, int del){
	int p,q;
	for(p = 0,q = 0; p < n; p ++){
		if(a[p] != del){
			a[q++] = a[p];
		}
	}
	*cnt = q;
}

