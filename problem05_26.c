#include <stdio.h>
#include <conio.h>

int perfectnum(int x);

int main()
{
    int y;

    for (y = 1; y <= 1000; y++) {
        if (y == perfectnum(y)) {
            printf("%d :  Mukemmel bir sayidir!\n", y);
        }
    }

    _getch();
    return 0;


}

int perfectnum(int x)
{
    
    int num = 0, a;
    a = (x - 1);
    for (; 1 <= a; a--) {

        if (x % a == 0) {
            num += a;
        }
    }

    return num;
}