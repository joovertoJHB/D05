#include <unistd.h>

int     ft_stcmp(char *s1, char *s2)
{
    int     i;

    i = 0;
    while(s1[i]&& (*s1 == *s2))
	{
		s1++;
		s2++;
 	}
	return(*s1 - *s2);
}
