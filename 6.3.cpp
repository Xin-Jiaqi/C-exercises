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
	int i,j,p,t;
	for (i = 0; i < len; i ++){
		p = i;
		for (j = (i+1); j < len; j ++){
			if (a[j] > a[p]){
				p = j;
			} 
		}
		t = a[i];
		a[i] = a[p];
		a[p] = t;
	}
}
