#include<stdio.h>

// int	ft_atoi(const char *str)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	k;

// 	i = 0;
// 	j = 1;
// 	k = 0;
// 	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
// 		i++;
// 	while (str[i] == '+' || str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 			j *= -1;
// 		i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		k = (str[i] - '0') + (k * 10);
// 		i++;
// 	}
// 	return (k * j);
// }
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	nbr;
	int		isneg;

	i = 0;
	nbr = 0;
	isneg = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (isneg == 1)
		return (-nbr);
	return (nbr);
}

// int main(void) {
//     char str[] = "-----1267890asdfgh345";
//     int num;
//     // 文字列型からint型への変換
//     num = ft_atoi(str);
//     printf("int型変数numの値は: %d\n", num);
//     return 0;
// }
