#include <stdio.h>
#include <math.h>

int main() 
{
	int scannednumber;
	int number;

	printf("Bes basamakli bir sayi girin:");

	scanf_s("%d", &scannednumber);

	printf("%d", scannednumber / 10000);
	number = scannednumber % 10000;
	
	printf("% d", number / 1000);
	number = number % 1000;

	printf("% d", number / 100);
	number = number % 100;

	printf("% d", number / 10);
	number = number % 10;

	printf("% d", number);

}