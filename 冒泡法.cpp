//ð�ݷ���С����

void sortpao(int stri[],int n){
	int i,j,changee;
	for(i=1; i<=n-1; i++){      
		for(j=0; j<=n-i-1; j++){
			if( stri[j] > stri[j+1] ){
				changee=stri[j]; 
				stri[j]=stri[j+1];
				stri[j+1]=changee;  
			}
		}
	}
}

//ð�ݷ��ɴ�С
void sortpao(int stri[],int n){
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
