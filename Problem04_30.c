// Fig. 4.7: fig04_07.c
// Counting letter grades with switch
#include <stdio.h>
#include <string.h>


int main(void)
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    char grade;
     // grade
   
    
    // loop until user types end-of-file key sequence
    while ((grade = getchar()) != EOF) {
         
        if(strchr(&grade, 'A' ) != 0 || strchr(&grade, 'a' ) != 0)
        {
            ++aCount; 
            
        }
        else if(strchr(&grade, 'B') != 0 || strchr(&grade, 'b') != 0)
        {
        
            ++bCount;
        
        }
        else if (strchr(&grade, 'C') != 0 || strchr(&grade, 'c') != 0)
        {

            ++cCount;

        }
        else if (strchr(&grade, 'D') != 0 || strchr(&grade, 'd') != 0)
        {

            ++dCount;

        }
        else if (strchr(&grade, 'F') != 0 || strchr(&grade, 'f') != 0)
        {

            ++fCount;

        }
        else if (strchr(&grade, '\n') != 0 || strchr(&grade, '\t') != 0)
        {

        }
        else 
        {
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
        
        }

       

       
        }

    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
    } // end while

   
