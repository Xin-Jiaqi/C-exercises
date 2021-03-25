#include <stdio.h>
#include <string.h>

int main(){//Ê¯Í·¼ôµ¶²¼! 
	
	int N;
	scanf("%d",&N);
	
	char player1[N][10],player2[N][10];
	
	int i;
	int type[N];
	for(i = 0; i < N; i ++){
		scanf("%s%s",player1[i],player2[i]);
		type[i] = strlen(player1[i]) - strlen(player2[i]);
	}
	
	int j;
	for(j = 0; j < N; j ++){
		switch(type[j]){
			case 0:
				printf("Tie\n");
				break;
			case 1:
				printf("Player1\n");
				break;
			case -1:
				printf("Player2\n");
				break;
			case 3:
				printf("Player1\n");
				break;
			case -3:
				printf("Player2\n");
				break;
			case 4:
				printf("Player2\n");
				break;
			case -4:
				printf("Player1\n");
				break;
		}
	}
		
	return 0;
}
