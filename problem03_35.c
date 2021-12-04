#include <stdio.h>

int main()
{
	int num = 0b101011;
	int number1;
	int number2;
	int number3;
	int number4;
	int number5;
	int number6;

	printf("%d", num / 32);
	number1 = num % 32;
	printf(" %d", number1/16);
	number2 = number1 % 16;

	printf(" %d", number2 / 8);
	number3 = number2 % 8;

	printf(" %d", number3 / 4);
	number4 = number3 % 4;

	printf(" %d", number4 / 2);
	number5 = number4 % 2;

	printf(" %d", number5 / 1);
	number6 = number5 % 1;

	int calculated_num = (num / 32) * 32 + (number1 / 16) * 16 + (number2 / 8) * 8 + (number3 / 4) * 4 + (number4 / 2)  * 2 + (number5 / 1) * 1;

	printf("\nnum degiskeni:%d calculated_num degiskeni:%d", num, calculated_num);

	



}