#include <stdio.h>
#include <math.h>

int main() 
{
	float yaricap;
	float cap;
	float alan;
	float cevre;
	float pi = 3.14159;

	printf("Cemberin yaricapini giriniz");
	scanf_s("%f", &yaricap);

	


	printf("Cemberin Capi %f Cemberin Alani %f Cemberin Cevresi %f", yaricap * 2, pi * yaricap * yaricap, 2 * pi * yaricap);
}