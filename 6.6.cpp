#include <stdio.h>

int main(){ //2 8 3 4 -1
			//6 1 4 9 -1
			//����A��������B��Ԫ�� 
	
	int a[100] = {0};
	int b[100] = {0};
	
	int i = 0;
	do{
		scanf("%d",&a[i]);
		i ++;
	}
	while(a[i-1] != -1);
	
	int j = 0;
	do{
		scanf("%d",&b[j]);
		j ++;
	}
	while(b[j-1] != -1);
	//�����������鲢��ֵ
	
	int p,q;//����ѭ��
	int unique = 1;//�ж�ָ�� 
	for(p = 0; p < i-1; p ++){
		for(q = 0; q  < j-1; q ++){
			if(a[p] == b[q]){
				unique = 0;
				break;
			}
		}
		if (unique){
			printf("%d ",a[p]);
		}
	}
	
	return 0;
}

