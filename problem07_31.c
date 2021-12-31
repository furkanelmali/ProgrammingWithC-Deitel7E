#include <stdio.h>

void multiplie(int a, int b);
void addition(int a, int b);
void extract(int a, int b);



int main()
{
	void (*f[3])(int) = { multiplie, addition, extract };

	int a,b;
	printf("\nEnter two integers:");
	scanf_s("%d%d", &a,&b);

	printf("%s", "Enter a number between 0 and 2 0:multiplie 1:addition 2: extract, 3 to end: ");
	size_t choice;
	scanf_s("%zu", &choice);

	while (choice >= 0 && choice < 3) {


		(*f[choice])(a,b);

		printf("\n%s", "Enter a number between 0 and 2, 3 to end: ");
		scanf_s("%zu", &choice);
	}
}

void multiplie(int a,int b)
{
	int multiplie = a * b;
	printf("\nmultiplie is : %d", multiplie);
}

void addition(int a, int b)
{
	int addition = a + b;
	printf("\naddition is : %d", addition);
}


void extract(int a, int b)
{
	int extract = a - b;
	printf("\nextract is : %d", extract);
}