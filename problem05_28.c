#include <stdio.h>
#include <conio.h>

int reverse(int x);


int main()
{
	int x;

	printf("enter a integer:");
	scanf("%d", &x);

	printf("reversed int is: %d", reverse(x));




}

int reverse(int x) {
	int d = 0;

	while (x > 0)
	{
		d = (d * 10) + (x % 10);
		x = x / 10;
	}

	return d;
}