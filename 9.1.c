//�ı��ļ�score.txt�б�����һ��ѧ���ĳɼ���Ϊ��������
//�ɼ�֮���ÿո�ָ�ɼ�����δ֪��
//Ҫ��Ӹ��ļ���ȡ���ݣ�����ƽ���ɼ�����߷ֺ���ͷ֣�
//�������������ļ�result.txt�У�����ƽ���ֱ�����λС����
//���������롿����score.txt�е�����Ϊ��90 80 70 60
//�����������result.txt�е�����Ϊ��75.00 90 60
#include <stdio.h>
#include <stdlib.h>
#define N 100

int main(){
	
	FILE *fp,*fq;//�ļ����� 
	int a[N],i,j = 0;
	float ave;
	
	if((fp = fopen("score.txt","r")) == NULL){
		printf("Can not open this file\n");
		exit(0);
	}//��fp
	 
	while(!feof(fp)){//�ļ��������ط���ֵ������Ϊ0 
		fscanf(fp,"%d",&a[j]);
		j ++;
	}//��ȡ�ļ������� 
	
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
	
	if(fclose(fp)){//�رճɹ�����0 
		printf("not\n");
		exit(0);
	}//�ر��ļ�fp 
	
	if ((fq = fopen("result.txt","w")) == NULL){
		printf("Can not open this file\n");
		exit(0);
	}//���ļ�fq 
	
	fprintf(fq,"%.2f %d %d",ave,max,min);//��fq���������� 
	
	if(fclose(fq)){
		printf("not\n");
		exit(0);
	}//�ر�fq
	 
	return 0;
}
