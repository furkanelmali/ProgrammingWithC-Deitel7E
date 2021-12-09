#include <stdio.h>
#include <math.h>

power(int base,int exponent);

int main() 
{
	int base, exponent;

	printf("Enter a base:");
	scanf("%d", &base);

	printf("Enter a exponent:");
	scanf("%d", &exponent);

	printf("\n\n %d power is %d = %d", base, exponent, power(base, exponent));


}

power(int base,int exponent)
{
	if (exponent == 0)
		return 1;
	else
		return base * power(base, exponent - 1);


}