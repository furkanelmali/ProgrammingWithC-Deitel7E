#include <stdio.h>

int integerPower(int baseint, int exp);

int main() 
{
	int base;
	int exponent;

	printf("base value:");
	scanf("%d", &base);

	printf("exponent value:");
	scanf("%d", &exponent);

	printf("power of base is:%d", integerPower(base, exponent));

}

int integerPower(int baseint, int exp)
{
	int counter=1;
	int basewithexp = 1;

	while(counter <= exp)
	{
		basewithexp *= baseint;
		counter++;
	}

	return basewithexp;

}