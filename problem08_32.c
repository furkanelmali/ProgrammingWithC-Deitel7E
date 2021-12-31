#include <stdio.h>
#include <string.h>

int convert(int d, int y, int m );

int main()
{
	
	int month = 0, day = 0, year = 0;
	
	
	printf("Enter a Month:");
	scanf_s("%d", &month);
	while (month > 12)
	{
		printf("Enter a month according to world time");
		printf("\nEnter a Month:");
		scanf_s("%d", &month);
	}
		
	printf("Enter a Day:");

	scanf_s("%d", &day);
	while (day > 31)
	{
		printf("Enter a day according to world time");
		printf("\nEnter a Day:");
		scanf_s("%d", &day);
	}
	printf("Enter a Year:");
	scanf_s("%d", &year);
	

	printf("Entered date is:%d/%d/%d", month, day, year);
	printf("\nConverted date is:");
	convert(day, year, month);



}

int convert(int d, int y, int m)
{
	
	switch(m)
	{
	  case 1:
		  printf("January %d,%d", d, y);
		  break;
	  case 2:
		  printf("February %d,%d", d, y);
		  break;
	  case 3:
		  printf("March %d,%d", d, y);
		  break;
	  case 4:
		  printf("April %d,%d", d, y);
		  break;
	  case 5:
		  printf("May %d,%d", d, y);
		  break;
	  case 6:
		  printf("June %d,%d", d, y);
		  break;
	  case 7:
		  printf("July %d,%d", d, y);
		  break;
	  case 8:
		  printf("August %d,%d", d, y);
		  break;
	  case 9:
		  printf("September %d,%d", d, y);
		  break;
	  case 10:
		  printf("October %d,%d", d, y);
		  break;
	  case 11:
		  printf("November %d,%d", d, y);
		  break;
	  case 12:
		  printf("December %d,%d", d, y);
		  break;
	}

	

}

