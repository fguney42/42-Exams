#include <unistd.h>

int	main(int argc, char **argv)
{
    int i = 0;
    int w = 0;
    int array[255];
    int a =0;
    while (i < 255)
    {
        array[i] = 0;
        i++;
    }
    if (argc == 3)
    {
        i = 1;
        while (argv[1][i])
        {
            a = 0;
            while (argv[2][a])
            {
                if (array[(unsigned char )argv[1][i]] == 0 && argv[1][i] == argv[2][a])
                {
                     array[(unsigned char)argv[1][i]] = 1;
                    write(1, &argv[1][i], 1);
                }
                a++;
            }
            w++;
        }
    }
}