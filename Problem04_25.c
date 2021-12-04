#include <stdio.h>
#include <conio.h>




int main()
{
	int x = 1, i = 1;
	int temp;
	
	

	printf("onlu\tikili\tsekizli\tonaltili");

	while(x <= 256)
	{
		printf("\n%d\t%d\t%o\t%X",x, decimalToBinary(x),x,x);
		
		x++;
	}


}

long decimalToBinary(int x)
{
	long binarynum = 0;
	int rem, temp = 1;

	while (x != 0)
	{
		rem = x % 2;
		x = x / 2;
		binarynum = binarynum + rem * temp;
		temp = temp * 10;
	}
	return binarynum;
}


