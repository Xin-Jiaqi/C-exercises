void searchit(int stri[],int n, int x){//nΪ������xΪҪ������� 
	int middle,top,bottom,judge;
	top = 0;    
	bottom = n-1;      
	judge = 0;
	do{ 
		middle =( top + bottom ) / 2;
		if(x == stri[middle]){  
			printf("�ҵ���%3d,��stri[%d]",x,middle);
			printf("\n");
			judge = 1;
		}
		else if(x < stri[middle]){
			bottom = middle - 1;
		}
		else if(x > stri[middle]) {
			top = middle + 1;
		}
	}while(top <= bottom && judge == 0);
	if(judge == 0){
		printf("%3dû���ҵ�",x);
	}
	printf("\n");
}

