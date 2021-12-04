#include <stdio.h>

int main()
{
	int n = 1;

	while (n <= 9000000000000)
	{

		if(n%1000000 == 0)
		{
		
			printf("\n%d", n);
		
		}

		n++;
	}


}