#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VALUE 1000
#define WON 0
#define LOSE 1

int rollDice(void);

int main()
{
	int dice1, dice2;
	int sum = 0;
	int result = 0;
	int results[VALUE];
	int gamepoint=1;
	int points;
	int count = 1;
	int lose=0, win=0;
	srand(time(NULL));

	while (count <= VALUE) {
		
		
		dice1 = rollDice();
		dice2 = rollDice();
		sum = dice1 + dice2;

		switch (sum)
		{

		case 7: case 11:

			results[result] = WON;
			printf("result%d:%d\n",count, results[result]);
			result++;
			
			break;

		case 2: case 3: case10: case 12:

			results[result] = LOSE;
			printf("result%d:%d\n",count, results[result]);
			result++;

			break;

		default:

			gamepoint = 0;

			points = sum;

			printf("\t\tGame winner dice: %d\n", points);

			break;

		}

		while (gamepoint == 0) {

			dice1 = rollDice();
			dice2 = rollDice();
			sum = dice1 + dice2;

			if (sum == points)
			{ 
				results[result] = WON;
				printf("result%d:%d\n", count, results[result]);
				gamepoint = 1;
				result++;
			}
			else if (sum == 7)
				{ 
					results[result] = LOSE;
					printf("result%d:%d\n", count, results[result]);
					gamepoint = 1;
					result++;	
				}


		}

		count++;
	}

	for(int i = 0; i<=999;i++)
	{
		int x = results[i];

		if (x == 0)
			win++;
		else
			lose++;
	
	}

	printf("\t\t\tWIN:%d\t\tLOSE:%d", win, lose);

}
	





int rollDice(void) {
	
	return ((rand() % 6) + 1);
}