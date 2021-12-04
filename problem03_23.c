#include <stdio.h>

int main() 
{
	int counter = 0;
	int number = 0;
	int largest = 0;

	printf("satis personelinin satis degerini girin(cikmak icin -1) :");

	while (number != -1) {

		scanf_s("%d", &number);

		counter = counter + 1;

		if (number > largest)
		{
			largest = number;
		}	

	}

	counter = counter - 1;
	printf("en buyuk satis degeri: %d girilen satis degeri sayisi: %d", largest, counter);
	


	
}