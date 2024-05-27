#include <unistd.h>
#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
#include <stdlib.h>
int	main()
{
    int  a;
    char *str1;
    char *str2 = "furkan";
	char *str;
	str = ft_strcpy(str1, str2);
    printf("%s", str);
}