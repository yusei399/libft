/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:09:00 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/08 14:50:18 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include 	<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


// int	main(void)
// {
// 	char	copy[] = "123";
// 	char	original[] = "45622";
// 	char	dest [] = "acd";

// 	printf("%s \n%s\n", dest, original);
// 	ft_strcpy(dest, copy);
// 	printf("%s\n%s\n", dest, copy);
// }