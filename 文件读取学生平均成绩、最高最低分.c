//文本文件score.txt中保存有一组学生的成绩（为整数），
//成绩之间用空格分割，成绩个数未知；
//要求从该文件读取数据，计算平均成绩、最高分和最低分，
//并将结果输出到文件result.txt中，其中平均分保留两位小数。
//【样例输入】假设score.txt中的数据为：90 80 70 60
//【样例输出】result.txt中的数据为：75.00 90 60
#include <stdio.h>
#include <stdlib.h>
#define N 100
int main(){
	FILE *fp,*fq;
	int a[N],i,j = 0;
	float ave;
	if((fp = fopen("score.txt","r")) == NULL){
		printf("Can not open this file\n");
		exit(0);
	}
	while(!feof(fp)){//?
		fscanf(fp,"%d",&a[j]);
		j ++;
	}
	int min = a[0],max = a[0],sum = 0;
	for(i = 0; i < j; i ++){
		sum = sum + a[i];
	}
	ave = sum*1.0/j;
	for(i = 0; i < j; i ++){
		if(a[i] >= max){
			max = a[i];
		}
		if(a[i] <= min){
			min = a[i];
		}
	}
	if(fclose(fp)){
		printf("not\n");
		exit(0);
	}
	if ((fq = fopen("result.txt","w")) == NULL){
		printf("Can not open this file\n");
		exit(0);
	}
	fprintf(fq,"%.2f %d %d",ave,max,min);
	if(fclose(fq)){
		printf("not\n");
		exit(0);
	}
	return 0;
}

