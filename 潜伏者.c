//23 May,start.
#include <stdio.h>
#include <string.h>

//MSRTZCJKPFLQYVAWBINXUEDGHOOILSMIJFRCOPPQCEUNYDUMPP
//YIZSDWAHLNOVFUCERKJXQMGTBPPKOIYKANZWPLLVWMQJFGQYLL


int main(){
	
	char obtained[100];
	gets(obtained);
//	char origin[strlen(obtained)];
//	gets(origin);
//	char request[100];
//	gets(request);//输入三条信息 

	char alphabet[26] = {0};
	int judge = 1;
	int i,j = 0;
	int x = 'A';
	do{
		for(i = 0; i < strlen(obtained); i ++){
			if(x == obtained[i]){
				x ++;
				alphabet[x-66] = 1;
				break;
			}
		}
	}while(x <= 'Z' && alphabet[x-66]);
	
	for(i = 0; i < 26; i ++){
		if(!alphabet[i]){
			judge = 0;
			break;
		}
	}
	
//	if(judge){
//		for(i = 0; i < strlen(obtained); i ++){
//			for(j = 0; j < strlen(obtained); j ++){
//				if(obtained[i] == obtained[j]){
//					if(origin[i] != origin[j]){
//						judge = 0;
//						break;
//						}
//					}
//				}
//			}//obtained-->origin
//	
//		if(judge){
//			for(i = 0; i < strlen(obtained); i ++){
//				for(j = 0; j < strlen(obtained); j ++){
//					if(origin[i] == origin[j]){
//						if(obtained[i] != obtained[j]){
//							judge = 0;
//							break;
//							}
//						}
//					}	
//				}//origin-->obtained
//			}
//	}
	
	printf("%d",judge);
		
	return 0;
}
