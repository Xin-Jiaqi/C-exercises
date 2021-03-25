#include <stdio.h>

void compare(char Player1[][9], char Player2[][9], char result[][8], int n);
int change(char Player);
//3
//Rock Scissors
//Paper Paper
//Rock Paper

int main(){
	
	int N;
	scanf("%d",&N);//一共进行了N次游戏 
	
	char S1,S2;
	char Player1[N][9],Player2[N][9];
	
	int i,x;
	for(i = 0; i < N; i ++){
		x = i;
		printf("第%d局：\n",i);
		scanf("%s %s",&S1,&S2);
		Player1[x][9] = S1;
		Player2[x][9] = S2;
	}//输入 
	
	char result[N][8];
	compare(Player1, Player2, result,N);//比较，记录结果 
	
	for(i = 0; i < N; i ++){
		printf("%s\n",result[i][8]);
	}//输出结果
	
	return 0;
}

void compare(char Player1[][9], char Player2[][9], char result[][8], int n){

	int j;
	for(j = 0; j < n; j++){
		if(change(Player1[j][9]) == change(Player2[j][9])){
			result[j][8] = "Tie";
		}else if((change(Player1[j][9])+1 == change(Player2[j][9])) || (change(Player1[j][9])-2 == change(Player2[j][9]))){
			result[j][8] = "Player1";
		}else{
			result[j][8] = "Player2";
		}
	}
}

int change(char Player){
	
	char rule[3][9] = {"Rock","Scissors","Paper"};//"Rock",0."Scissors",1."Paper",2.
	int k;
	for(k = 0; k < 3; k ++){
		if(Player == rule[k][9]){
			return k;
		}
	}
}
