#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h> 


int rand_num();

int main()
{

	int rand = rand_num();
	int guess_count=1;

	int guess;

	printf("\nI have a number between 1 and 1000\n");
	printf("Can you guess my number?\n");

	printf("Please enter your firs guess:");
	scanf("%d", &guess);

	while (guess != rand)
	{
		if (guess < rand)
			printf("%d is too low try again.", guess);
		else if (guess > rand)
			printf("%d  is too high try again.", guess);

		scanf("%d", &guess);
		guess_count++;
	}
	if(guess_count < 10)
		printf("\n Either you know the secret or you got lucky!");
	else if(guess_count == 10)
		printf("\n Ahah! You know the secret!");
	else if (guess_count > 10)
		printf("\n You should be able to do better!");
	



	printf("\n Would you like to play again (y or n)?");


	char answer = getchar();
	while ((answer = getchar()) != "n" || (answer = getchar()) != "N") {

		if (strchr(&answer, 'y') != 0 || strchr(&answer, 'Y') != 0) {
			main();

		}
		else
			return;


	}







}

int rand_num()
{
	srand(time(NULL));
	int x = 1 + rand() % 1000;
	return x;
}


