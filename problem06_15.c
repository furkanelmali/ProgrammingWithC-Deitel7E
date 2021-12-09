#include <stdio.h>

int main()
{
	int value;
	int counter = 0;
	int counternum;
	int valueind[20];

	while(counter<=19)
	{
		printf("Enter a int within the range 10-100:");
		scanf("%d", &value);
		valueind[counter] = value;
		counter++;
	}
	
	printf("\n\n  Numbers entered only one time :");
	for (int x = 0; x <= 20 - 1; x++) {
		counternum = 0;
		for (int y = 0; y <= 20 - 1; y++) {
			if (valueind[x] == valueind[y])
				counternum++;
		}
		if (counternum < 2)
			printf("%4d", valueind[x]);
	}



}