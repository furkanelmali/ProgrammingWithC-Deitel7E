#include <stdio.h>


int multiple(int x, int y);

int main()
{
	int number1;
	int number2;

	printf("enter number1 and number2 for checking multiple:");
	scanf("%d %d", &number1, &number2);

	printf("multiple check (1 = true,0 = false): %d", multiple(number1, number2));
}

int multiple(int x, int y)
{
	if (y % x == 0)
		return 1;
	else
		return 0;

}