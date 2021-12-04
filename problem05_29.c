#include <stdio.h>

int gcd(int x, int y);


int main() {

	int num1, num2;


	printf("Enter 2 integer for greatest common divisor:");

	scanf("%d %d", &num1, &num2);

	printf("Greatest common divisor is: %d", gcd(num1, num2));
}

int gcd(int x, int y)
{
	int g_com = 1;
	
	int divisor = 2;

	while (divisor <= x && divisor <= y)
	{
		
		if (x % divisor == 0 && y % divisor == 0) 
		{ 
			printf("Common Divisors = %d\n", divisor);
			g_com = divisor;
			
		}

		divisor++;

	}

	return g_com;
}