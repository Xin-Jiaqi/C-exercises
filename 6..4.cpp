#include <stdio.h>

int main(){
	
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	
	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	if((year%4 == 0 && year%100 != 0) || year%400 == 0){
		months[1] = 29;
	}
	
	int days = 0;
	int i;
	if(month != 1){
		for(i = 0; i < (month-1); i ++){
			days += months[i];
		}
		days += day;
	}else{
		days = day;
	}
	
	printf("Days of year:%d",days);
	
	return 0;
}
