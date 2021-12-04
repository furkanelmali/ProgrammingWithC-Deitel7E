#include <stdio.h>

int main() {
	int scannednumber;
	int number1s;
	int number1;
	int number2s;
	int number2;
	int number3s;
	int number3;
	int number4s;
	int number4;
	int number5s;
	int number5;


	printf("Bes basamakli bir sayi girin:");

	scanf_s("%d", &scannednumber);
	number1 = scannednumber / 10000;
	number1s = scannednumber % 10000;

	number2 = number1s / 1000;
	number2s = number1s % 1000;

	number3 = number2s / 100;
	number3s = number2s % 100;

	number4 = number3s / 10;
	number4s = number3s % 10;

	number5= number4s / 1;
	number5s = number4s % 1;

	

	if(number1 == number5 || number2 == number4)
	{
		printf("%d number is a pallindrom", scannednumber);
	}
	else {
		printf("%d number is not a pallindrom", scannednumber);
	}

	


}