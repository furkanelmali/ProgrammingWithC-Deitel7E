#include <stdio.h>
#include <time.h>

int multiplication(int x, int y);
int answercheck(int correct, int answer);

int main()
{
	
	int answer;
	int check;
	
	
	srand(time(NULL));
	int number1 = 1 + rand() % 9;
	int number2 = 1 + rand() % 9;

	int correct = multiplication(number1, number2);

	printf("What is the %d * %d", number1, number2);

	
	scanf("%d", &answer);
	check = answercheck(correct, answer);
	while(check != 1)
	{
		printf("Sorry, try again.");
		scanf("%d", &answer);
		check = answercheck(correct, answer);
	}

	printf("Very Good!");

}

int multiplication(int x, int y)
{
	return x * y;
}

int answercheck(int correct, int answer)
{
	if (answer == correct)
		return 1;
	else
		return 0;
}