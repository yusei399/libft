#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		len;
	char	*number;

	len = 0;
	number = str;
	while (*number != '\0')
	{
		len++;
		number += 1;
	}
	return (len);
}

// int	main(void)
// {
// 	char	*str;
// 	int	a;

// 	str = "1234567890";
// 	a = ft_strlen(str);
// 	printf("%d \n", a);
// }