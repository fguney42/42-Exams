#include <unistd.h>
#include <stdio.h>
int main(int argc,char **argv)
{
    int i  =0;
    int count = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            count = 0;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                count = argv[1][i] - 96;
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                count = argv[1][i] - 64;
            }
            else
            {
                write(1, &argv[1][i], 1);
            }
            while (count)
            {
                write(1, &argv[1][i], 1);
                count--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}