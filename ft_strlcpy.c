/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:58:55 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/07 19:58:57 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char *ft_strlen(char *dest, char *src)
// {
// 	int	i;

// 	i = 0;

// 	while (src[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}

// int	main(void)
// {
// 	char	src[] = "hello";
// 	char	dest[100];
// 	int		size;
// 	size = 0;
// 	size = ft_strlcpy(dest, src, size);
// 	printf("%d", size);
// }
