#include <stdio.h>

void sort(int a[], int len);

int main(){
	
	int n;
	scanf("%d",&n);
	
	int a[n];
	int i;
	for (i = 0; i < n; i ++){
		scanf("%d",&a[i]);
	}//ÊäÈë 
	
	sort(a,n);//ÅÅÐò
	
	for (i = 0; i < (n-1); i ++){
		printf("%d ",a[i]);
	}
	printf("%d",a[i]);//Êä³ö 
	
	return 0;
} 

void sort(int a[], int len){
	int p,t;
	int limit = len / 2;
	for (p = 0; p < limit; p ++){
		t = a[p];
		a[p] = a[len-p-1];
		a[len-p-1] = t;
	}
}
