#include <stdio.h>


int main()
{
	double currentpopulation = 7900000000;
	int currentyear = 2021;
	float currentincreaserate;
	float increase = 0;
	int dateofdouble = 0;
	int checkfordouble = 1;
	printf("Yil\t\tNufus\t\tArtis");
	printf("\n2021\t\t%.0f\t%f", currentpopulation, increase);

	while (++currentyear <= 2076)
	{
		if(currentyear<=2051)
		{
			currentincreaserate = 0.1;
			
		}
		else 
		{
			currentincreaserate = 0.05;
			
		}

		increase = currentincreaserate * currentpopulation;
		currentpopulation = currentpopulation + increase;

		if(currentpopulation >= 2* 7900000000)
		{
			if(checkfordouble == 1)
			{
				dateofdouble = currentyear;
				checkfordouble = 0;
			}
		
		}

		printf("\n%d.Yil\t%.0f\t%.0f", currentyear, currentpopulation,increase);
		
	}
	printf("\nnufusun iki katina ciktigi yil : %d", dateofdouble);
}