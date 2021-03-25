//选择法由小到大 
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
			}//交换二者位置 
	}
}

//选择法由大到小 
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
			}//交换二者位置 
	}
}
