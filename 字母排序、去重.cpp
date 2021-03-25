#include <stdio.h>
#include <string.h>

void sort(char c[],int n);
void slim(char c[],int n);
int main( ){

	char c[100];
	gets(c);//读入字符串 
	
	sort(c,strlen(c));//排序
	
	slim(c,strlen(c));//去重 
	
	puts(c);//输出字符串 

    return 0;
}


void sort(char c[],int n){
	int i,j,k;
	char t;
	for(i = 0; i < n-1; i ++){//控制循环次数：n-1次 
		k = i;//k定住当前这个元素坐标 
		for(j = i+1; j < n; j ++){//用j来比较 
			if(c[k] > c[j]){
				k = j;
			}//找ASCⅡ码最小数的坐标，赋给k 
		}
		t = c[i];
		c[i] = c[k];
		c[k] = t;//交换最小数到被定住元素的坐标 
	}
}

void slim(char c[],int n){
	int i,j,k;
	for(i = 0,k = 0; i < n; i ++){//定一个元素 
		if(c[i]){//当这个元素不为'\0'时 
			c[k++] = c[i];
			for(j = i+1; j < n; j ++){
				if(c[i] == c[j]){
					c[j] = '\0';//和后面的元素比较，把所有相同元素全赋为'\0' 
				}
			}
		
		}
	}
	c[k] = '\0'; 
} 


