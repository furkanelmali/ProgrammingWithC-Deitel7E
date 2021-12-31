#include <stdio.h>

void circumference(int a);
void area(int b);
void spherevol(int c);

float pi = 3.14;

int main()
{
	void (*f[3])(int) = { circumference, area, spherevol };

	int radius;
	printf("\nEnter a radius value:");
	scanf_s("%d", &radius);

	printf("%s", "Enter a number between 0 and 2 0:perimeter 1:area 2: spherevol, 3 to end: ");
	size_t choice; 
	scanf_s("%zu", &choice);

	while (choice >= 0 && choice < 3) {

		                          
		(*f[choice])(radius);

		printf("\n%s", "Enter a number between 0 and 2, 3 to end: ");
		scanf_s("%zu", &choice);
	}
}

void circumference(int a)
{
	float pery = 2 * a * pi;
	printf("\nCircumference is : %f", pery);
}

void area(int b)
{
	float area = pi * b * b;
	printf("\nArea of the circle is : %f", area);
}


void spherevol(int c)
{
	float vol = (4 / 3) * pi * c * c * c;
	printf("\nSphere volume is : %f", vol);
}