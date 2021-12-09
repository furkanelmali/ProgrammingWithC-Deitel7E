#include <stdio.h>
#include <time.h>

int multiplication(int x, int y);
int divide(int x, int y);
int extract(int x, int y);
int addition(int x, int y);
int answercheck(int correct, int answer);

int main()
{
	int answer;
	int check;
	int operation;
	int correct;

	printf("choose the operation(+=0,-=1,*=2,/=3):");
	scanf("%d", &operation);
	

	srand(time(NULL));
	int number1 = 1 + rand() % 9;
	int number2 = 1 + rand() % 9;
	

	switch(operation)
	{
	case 0:
		printf("What is the %d + %d", number1, number2);
		 correct = addition(number1, number2);
		break;
	case 1:
		printf("What is the %d - %d", number1, number2);
		 correct = extract(number1, number2);
		break;
	case 2:
		printf("What is the %d * %d", number1, number2);
		 correct = multiplication(number1, number2);
		break;

	case 3:
		printf("What is the %d / %d", number1, number2);
		 correct = divide(number1, number2);
		break;
	default:
		printf("Wrong entering");
	}
	


	scanf("%d", &answer);


	check = answercheck(correct, answer);
	while (check != 1)
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

int divide(int x, int y)
{
	return x / y;
}

int extract(int x, int y)
{
	return x - y;
}

int addition(int x, int y)
{
	return x + y;
}

int answercheck(int correct, int answer)
{
	if (answer == correct)
		return 1;
	else
		return 0;
}