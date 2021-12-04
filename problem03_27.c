#include <stdio.h>

int main()
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result = 0;

    while (result != -1) {


        printf("%s", "Sonucu giriniz ( 1=gecti,2=basarisiz, -1= cikis ): ");
        scanf_s("%d", &result);

        if (result == 1) {
            passes = passes + 1;
            student = student + 1;
        }
        else if(result == 2) {
            failures = failures + 1;
            student = student + 1;
        }
        else if (result == -1)
        {
            student--;

        }
        else 
        {
            printf("%s", " gecersiz bir giris yaptiniz \n");
        
        }   

        

        
    }

    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);
    printf("Students %u\n", student);


    if (passes > 8) {
        puts("Bonus to instructor!");
    }
}



