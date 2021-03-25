void searchit(int stri[],int n, int x){//n为总数，x为要查的数字 
	int middle,top,bottom,judge;
	top = 0;    
	bottom = n-1;      
	judge = 0;
	do{ 
		middle =( top + bottom ) / 2;
		if(x == stri[middle]){  
			printf("找到了%3d,是stri[%d]",x,middle);
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
		printf("%3d没有找到",x);
	}
	printf("\n");
}

