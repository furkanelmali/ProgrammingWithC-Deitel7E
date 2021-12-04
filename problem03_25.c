#include <stdio.h>

int main()
{
	int startingnum;
	int addingnum;
	int count;
	int counter = 0;
	int currentnum = 0;
	int extractnum = 0;
	
	printf("baslangic degerini kac adet sayi istendigini ve kacar kacar artacagini giriniz:");
	scanf_s("%d %d %d", &startingnum, &count, &addingnum);

	printf("A");
	

	for(int i = 1; i <= count; ++i)
	{
		extractnum++;
		
		printf("\tA+%d", addingnum * extractnum);

	}

	for (int i = 1; i <= count; ++i)
	{
		counter++;

		if (counter == 1)
		{

			if (currentnum > startingnum)
			{
				currentnum = currentnum + addingnum;
			}
			else
			{
				currentnum = startingnum + addingnum;
			}

			printf("\n%d\t%d\t ",startingnum, currentnum);


		}
		else
		{
			counter++;

			if (currentnum > startingnum)
			{
				currentnum = currentnum + addingnum;
			}
			else
			{
				currentnum = startingnum + addingnum;
			}

			printf("%d\t ", currentnum);

		}
		
		

	}
	


	
		
}