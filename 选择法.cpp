//ѡ����С���� 
void sortchoose(int stri[],int n){
	int i,j,k,changee;
	
	for(i=0;i<n-1;i++){
		k=i;
    	for(j=i+1;j<n;j++){
    		if(stri[j]<stri[k]){
				k=j;
			}
		}
      		if(k!=i){
    			changee=stri[k];
    			stri[k]=stri[i];
    			stri[i]=changee;
			}//��������λ�� 
	}
}

//ѡ���ɴ�С 
void sortchoose(int stri[],int n){
	int i,j,k,changee;
	
	for(i=0;i<n-1;i++){
		k=i;
    	for(j=i+1;j<n;j++){
    		if(stri[j]>stri[k]){
				k=j;
			}
		}
      		if(k!=i){
    			changee=stri[k];
    			stri[k]=stri[i];
    			stri[i]=changee;
			}//��������λ�� 
	}
}
