#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc,char **argv)
{
	int i = 0;
	int a = 1;
	int j = 0;

	int array[255];

	while (i < 255)
	{
		array[i] = 0;
		i++;
	}
	if (argc == 3)
	{
		a = 1;
		while (argv[a])
		{
			j = 0;
			while (argv[a][j])
			{
				if (array[(unsigned char)(argv[a][j])] == 0)
				{
					array[(unsigned char)(argv[a][j])] = 1;
					write(1, &argv[a][j], 1);
				}
				j++;
			}
			a++;
		}
	}
	write(1, "\n", 1);
}