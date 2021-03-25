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
	}//�������� 
	
	sort_c(group,N);
	for(h = 0; h < N-1; h ++){
		printf("%d ",group[h]);
	}
	printf("%d\n",group[h]);//����һ��Ҫ�� 
	
	sort_b(group,N);
	for(h = 0; h < N-1; h ++){
		printf("%d ",group[h]);
	}
	printf("%d\n",group[h]);//���ڶ���Ҫ�� 
	
	return 0;
}

void sort_c(int *a,int n){//ѡ�� ��С���� 
//5 12 -3 7 -11 9 
//-11 9 -3 5 7 12 
	int i,j,k;
	int change;
	for(i = 0; i < n-1; i ++){
		k = i;//���������С 
		for(j = i+1; j < n; j ++){
			if(a[k] > a[j]){
				k = j;
			}//�ҵ�һ����С�ľ���k��� 
		}
		change = a[i];
		a[i] = a[k];
		a[k] = change;//���� 
	}
}
void sort_b(int *a,int n){//ð�ݷ� �ɴ�С
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
