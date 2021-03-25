#include <stdio.h>
#include <string.h>

void sort_c(int *a,int n);
void sort_b(int *a,int n);

int main(){
	
	const int N = 6;
	int group[N];
	int h;
	for(h = 0; h < N; h ++){
		scanf("%d",&group[h]);
	}//输入整数 
	
	sort_c(group,N);
	for(h = 0; h < N-1; h ++){
		printf("%d ",group[h]);
	}
	printf("%d\n",group[h]);//整第一个要求 
	
	sort_b(group,N);
	for(h = 0; h < N-1; h ++){
		printf("%d ",group[h]);
	}
	printf("%d\n",group[h]);//整第二个要求 
	
	return 0;
}

void sort_c(int *a,int n){//选择法 由小到大 
//5 12 -3 7 -11 9 
//-11 9 -3 5 7 12 
	int i,j,k;
	int change;
	for(i = 0; i < n-1; i ++){
		k = i;//假设这个最小 
		for(j = i+1; j < n; j ++){
			if(a[k] > a[j]){
				k = j;
			}//找到一个更小的就用k标记 
		}
		change = a[i];
		a[i] = a[k];
		a[k] = change;//交换 
	}
}
void sort_b(int *a,int n){//冒泡法 由大到小
	int i,j,change;
	for(i = 0; i < n-1; i ++){
		for(j = i+1; j < n; j ++){
			if(a[i] < a[j]){
				change = a[i];
				a[i] = a[j];
				a[j] = change;
			}
		}
	}
}
