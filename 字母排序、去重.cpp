#include <stdio.h>
#include <string.h>

void sort(char c[],int n);
void slim(char c[],int n);
int main( ){

	char c[100];
	gets(c);//�����ַ��� 
	
	sort(c,strlen(c));//����
	
	slim(c,strlen(c));//ȥ�� 
	
	puts(c);//����ַ��� 

    return 0;
}


void sort(char c[],int n){
	int i,j,k;
	char t;
	for(i = 0; i < n-1; i ++){//����ѭ��������n-1�� 
		k = i;//k��ס��ǰ���Ԫ������ 
		for(j = i+1; j < n; j ++){//��j���Ƚ� 
			if(c[k] > c[j]){
				k = j;
			}//��ASC������С�������꣬����k 
		}
		t = c[i];
		c[i] = c[k];
		c[k] = t;//������С��������סԪ�ص����� 
	}
}

void slim(char c[],int n){
	int i,j,k;
	for(i = 0,k = 0; i < n; i ++){//��һ��Ԫ�� 
		if(c[i]){//�����Ԫ�ز�Ϊ'\0'ʱ 
			c[k++] = c[i];
			for(j = i+1; j < n; j ++){
				if(c[i] == c[j]){
					c[j] = '\0';//�ͺ����Ԫ�رȽϣ���������ͬԪ��ȫ��Ϊ'\0' 
				}
			}
		
		}
	}
	c[k] = '\0'; 
} 


