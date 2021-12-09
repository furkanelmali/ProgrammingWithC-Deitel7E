#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define value 36000

int main()
{
    int dice1;
    int dice2;
    int counter;
    int add[value];

    srand(time(NULL));

    for (counter = 0; counter < value; counter++) {
        dice1 = 1 + rand() % 6;
        dice2 = 1 + rand() % 6;

        add[counter] = dice1 + dice2;

        printf("\n\n   %d + %d = %d", dice1, dice2, add[counter]);
        
       
    }


}