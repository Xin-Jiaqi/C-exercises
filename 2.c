//��������������1-1/2+2/3-3/5+5/8-8/13+����ǰn(1��n��35)��ĺͣ�n�ɼ������룬����������6λС����
//��������ʽ����������n
//
//�������ʽ�������ֵ
//���������롿21
//�����������1.195956

#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int i;
	double result = 1;
	
	if(n == 1){
		result = 1;
	}else if(n == 2){
		result = 1/2;
	}else{
		int term[n];
		term[0] = 1;
		term[1] = 2;
		for(i = 2; i < n; i ++){
			term[i] = term[i-1]+term[i-2];
		}
		for(i = 1;i < n; i ++){
			result += pow(-1.0,i)*term[i-1]/term[i];	
		}
	}
	printf("%.6f",result);
	
	return 0;
}
