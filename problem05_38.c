#include <stdio.h>

unsigned long long int factorial(unsigned int number);
int count = 0;
long long int factorial_num;

int main(void)
{
    for (unsigned int i = 0; i <= 21; ++i) {
        printf("\n%u! = %llu\n", i, factorial(i));
        count = 0;
    }
}

unsigned long long int factorial(unsigned int number)
{
    
    
                                            
    if (number <= 1) {
        return 1;
    }
    else {
        if (count == 0)
        {
            factorial_num = number;
        }
        else
            factorial_num *= number;
        
        printf("\n factorial is in processing. Process number is: %u Current value is: %lld \n", number, (long long int) factorial_num);
        count++;
        return (number * factorial(number - 1));
       

    }
}
