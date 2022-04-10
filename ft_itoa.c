/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:02:07 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/09 15:19:13 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_itoa_len(int n)
{
	int	itoa_len;

	itoa_len = 0;
	if (n <= 0)
		itoa_len++;
	while (n != 0)
	{
		itoa_len++;
		n = n / 10;
	}
	return (itoa_len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = ft_itoa_len(n);
	str = malloc(sizeof(char *) * (i + 1));
	str[i] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[i] = '\0';
	while (n != 0)
	{
		i--;
		str[i] = abs(n % 10) + '0';
		n = n / 10;
	}
	return (str);
}