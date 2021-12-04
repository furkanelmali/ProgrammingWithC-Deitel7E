#include <stdio.h>

int main()
{
	int deger;
	int carpim = 1;

	printf("bir deger giriniz:");
	scanf_s("%d", &deger);

	while(deger != 0)
	{
		carpim = deger * carpim;
		deger--;
	
	
	}

	printf("\ndegerin faktoriyeli: %d", carpim);





}