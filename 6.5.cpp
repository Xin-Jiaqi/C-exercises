#include <stdio.h>

void find(int a[], int len, int *p, int *q);

int main(){
	
	int n;
	scanf("%d",&n);
	
	int a[n];
	int i;
	for (i = 0; i < n; i ++){
		scanf("%d",&a[i]);
	}//���� 
	
	int p,q;
	find(a,n,&p,&q);//����  p������ q�ǳ��ֵĴ��� 
	
	printf("%d appears %d times",p,q);
	//��� 
	
	return 0;
} 

void find(int a[], int len, int *p, int *q){
	int i,j;
	int b[10] = {0};//b������������ 
	for (j = 0; j < len; j ++){//����a���������� 
		for (i = 0; i < 10; i ++){//һһ�Ƚ� 
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
	}//��b����� 
	
	*p = t;
	*q = b[t];
}
