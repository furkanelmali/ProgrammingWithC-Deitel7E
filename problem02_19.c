#include <stdio.h>
#include <math.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int smallest;
	int biggest;
	

	printf("Enter three integers");

	scanf_s("%d %d %d", &num1, &num2, &num3);

	
	int sum = num1 + num2 + num3;
	int average = sum / 2;
	int multiplie = num1 * num2 * num3;

	if (num1 > num2 && num1>num3) {

		biggest = num1;
	}
	
	if (num2 > num1 && num2>num3) {

		biggest = num2;
	}
	
	if (num3 > num1 && num3>num2) {

		biggest = num3;
	}


	if (num1 < num2 && num1<num3)
	{
		smallest = num1;
	}

	if (num2 < num1 && num2<num3)
	{
		smallest = num2;
	}
	if (num3 < num1 && num3<num2)
	{
		smallest = num3;
	}

	int x = 1;

	

	printf("Sum is %d, Average is %d, Multiplie is %d,  smallest is %d, biggest is %d", sum, average, multiplie, smallest, biggest);
	
	
	
}

