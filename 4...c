#include <stdio.h>

void sortpao(int stri[],int n){//ð�ݷ��ɴ�С
	int i,j,changee;
	for(i=1; i<=n-1; i++){      
		for(j=0; j<=n-i-1; j++){
			if( stri[j] < stri[j+1] ){
				changee=stri[j]; 
				stri[j]=stri[j+1];
				stri[j+1]=changee;
			}
		}
	}
}
void slim(int c[],int n){//ȥ�� 
	int i,j,k;
	for(i = 0,k = 0; i < n; i ++){//��һ��Ԫ�� 
		if(c[i]){//�����Ԫ�ز�Ϊ'\0'ʱ 
			c[k++] = c[i];
			for(j = i+1; j < n; j ++){
				if(c[i] == c[j]){
					c[j] = 0;//�ͺ����Ԫ�رȽϣ���������ͬԪ��ȫ��Ϊ0 
				}
			}
		
		}
	}
	c[k] = 0;
} 

int main(){
	
	int n;
	scanf("%d",&n);
	
	int table[n],table1[n];
	int i;
	for(i = 0; i < n; i ++){
		scanf("%d",&table[i]);
		table1[i] = table[i];
	}
	
	sortpao(table1,n);
	slim(table1,n);

	int s[sizeof(table1)/sizeof(table1[0])];
	for(i = 0; i < sizeof(table1)/sizeof(table1[0]); i ++){
		s[i] = i+1;
	}
	
	int j;
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j ++){
			if(table[i] == table1[j]){
				printf("%d ",s[j]);
			}
		}
	}
	
	return 0;
}
//7
//-3 75 51 90 1118 51 -3
//5  3  4  2  1  4  5
