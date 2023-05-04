//Shardae Douglas - Project 5: Craps

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int myPoint;
	srand(time(NULL));

	int result;
	enum Status{CONTINUE,WIN,LOSE
	};
	enum Status status;
	result=rollDice();
	switch(result){
		case 7:
		    status=WIN;
		    break;
		case 11:
			status=WIN;
			break;
		case 2:
		    status=LOSE;
		    break;
		case 3:
		    status=LOSE;
		    break;
		case 12:
			status=LOSE;
			break;
		default:
			status=CONTINUE;
			myPoint=result;
			}
		while(status==CONTINUE){
			result=rollDice();
			if (result==7 || result == 11){
				status=WIN;
			}else {
				status=LOSE;
			}
		}			
		if(status==WIN){
			printf("Player won!");
		}else {
			printf("Player lost!");
		}
	
}
int rollDice(void){
	int die1;
	int sum;
	die1=1+(rand()%6);
	int die2;
	die2=1+(rand()%6);
	sum=die1+die2;

	printf("%d + %d = %d\n",die1,die2,sum);
	return sum;