#include <stdio.h>

void  MonthDay(int year,int yearDay,int *pMonth,int *pDay);

int main(){

	int year,yearDay;
	scanf("%d %d",&year,&yearDay);
	
	int pMonth,pDay;
	MonthDay(year,yearDay,&pMonth,&pDay);

	
	printf("%d-%d-%d",year,pMonth,pDay);
	
    return 0;
}

void  MonthDay(int year,int yearDay,int *pMonth,int *pDay){
	
	int a,b;
	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	if((year%4 == 0 && year%100 != 0) || year%400 == 0){
		months[1] = 29;
	}
	//先把每个月的天数摆好

	a = 1;
	while((yearDay - months[a-1]) > 0){
		yearDay -= months[a-1];
		a ++;
	}
	
	
	b = yearDay;
	

	
	*pMonth = a;
	*pDay = b;
	
}
