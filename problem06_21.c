#include <stdio.h>

#define VALUE 10
int main()
{
    int chair[VALUE] = { 0,0,0,0,0,0,0,0,0,0 }, x, y = 1, z = 6;

    while (1) {


        printf("For Class One press 1\nFor economy class press 2");
        scanf("%d", &x);

        if (x == 1) {
            if (y == 6)
                printf("there is no more class one seat");
            else
            {
                chair[y] = 1;
                y++;
            }
        }
        else if (x == 2) {
            if (z == 12)
                printf("there is no more class one seat");
            else
            {
                chair[z] = 1;
                z++;
            }
            
            
        }
        else
            printf("Wrong entering\n");


    }

}