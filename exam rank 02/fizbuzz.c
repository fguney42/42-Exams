#include <unistd.h>
#include <stdio.h>
void    putnbr(int f)
{
    int a = 0;
    if (f > 9)
    putnbr(f / 10);
    f = f % 10 + '0';
    write(1, &f, 1);
}

int main()
{
    int number = 1;

    while (number <= 100)
    {
        if (number % 3 == 0 && number % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (number % 3 == 0)
        write(1, "fizz\n", 5);
        else if (number % 5 == 0)
        write(1, &"buzz\n", 5);
        else
        {
            putnbr(number);
            write(1, "\n", 1);
        }
        number++;
    }
}