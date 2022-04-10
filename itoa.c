#include <unistd.h>
#include <stdlib.h>


int abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int ft_len(int n)
{
	int len;
	len = 0;

	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}


char *ft_itoa(int n)
{
	int i;
	char *str;

	i = ft_len(n);

	str = malloc(sizeof(char *) * (i + 1));
	str[i] = '\0';

	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[i] = '\0';
	while(n != 0)
	{
		i--;
		str[i] = abs(n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

#include <stdio.h>
#include <limits.h>

int      main(void)
{
 int d = INT_MIN;
 printf("%d%s\n", d, ft_itoa(d));
 
 d = -13;
 printf("%d%s\n", d, ft_itoa(d));
 
 d = 0;
 printf("%d%s\n", d, ft_itoa(d));
 
 d = 5;
 printf("%d%s\n", d, ft_itoa(d));
 
 d = INT_MAX;
 printf("%d%s\n", d, ft_itoa(d));
}


