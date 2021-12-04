#include <stdio.h>
#include <math.h>

int main() 
{
	float height;
	int weight;
	int vki;

	printf("enter your height (metric)");
	scanf_s("%f", &height);

	printf("enter your weight (kilogram)");
	scanf_s("%d", &weight);

	

	vki = weight / (height*height);

	printf("Your BMI is %d", vki);

	printf("\n BMI Values \n");
	printf("Underweight: less then 18.5 \n");
	printf("Normal: between 18.5 and 24.9 \n");
	printf("Overweight: between 25 and 20.9 \n");
	printf("Obese: 30 or greater \n");
}