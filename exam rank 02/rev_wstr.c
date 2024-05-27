#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
int main(int argc,char **argv)
{   int r = 0;
    int i = 0;
    char str[1000];
    int a = 0;
    if (argc == 2)
    {
        while (argv[1][i] <= 32)
        {
            i++;
        }
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] != ' ')
            {
                r++;
            }
            i++;
        }
        while (argv[1][i] <= 32)
        {
            i--;
        }
        while (i>= 0)
        {
            str[a] = argv[1][i];
            if (argv[1][i] == ' ')
            {
                while (a >= 0)
                {
                    if (str[a] > 32)
                    write(1, &str[a], 1);
                    a--;
                }
                if (argv[1][i + 1] > 32)
                write(1, " ", 1);
            }
            i--;
            a++;
        }
        if (r != 0)
        {
            a--;
        while (a >= 0)
        {
            write(1, &str[a], 1);
            a--;
        }
        }
    }
    else if (argc != 2 || argv[1][0] == '\0')
    {
        write(1, "\n", 1);
        return (0);
    }
    write(1, "\n", 1);
}