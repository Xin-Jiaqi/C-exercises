#include <stdio.h>
#include <string.h>

int examine(char a[], char b[], int n, double threshold);

int main(){//ATCGCCGTAAGTAACGGTTTTAAATAGGCC
	    	//ATCGCCGGAAGTAACGGTCTTAAATAGGCC
	
	double threshold;
	scanf("%lf",&threshold);
	
	char a[500] = {0};
	scanf("%s",a);

	char b[500] = {0};
	scanf("%s",b);
	
	if(examine(a,b,strlen(a),threshold)){
		printf("yes");
	}else{
		printf("no");
	}
	
	return 0;
}

int examine(char a[], char b[], int n, double threshold){
	int i,cnt = 0;
	double rate;
	for(i = 0; i < n; i ++){
		if(a[i] != b[i]){
			cnt ++;
		}
	}
	rate = 1 - cnt / n;
	if(rate >= threshold){
		return 1;
	}else{
		return 0;
	}
}





