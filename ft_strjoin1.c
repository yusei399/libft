/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:17:58 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/09 14:18:14 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

// int	ft_strlen(char *str)
// {
// 	int	i;
// 	int	j;
// 	int	count;

// 	i = 0;
// 	j =0;
// 	count = 0;
// 	while (str[i] != '\0')
// 	{
// 		count++;
// 		i++;
// 	}
// 	return (count);
// }

int	ft_len(int size, char **strs)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*j;
	int		k;
	int		n;

	k = 0;
	n = 0;
	i = ft_strlen(sep) * (size - 1) + ft_len(size, strs);
	j = (char *)malloc(sizeof(char ) * (i + 1));
	i = -1;
	while (size > ++i)
	{
		k = 0;
		while (strs[i][k] != '\0')
			j[n++] = strs[i][k++];
		k = 0;
		while (sep[k] != '\0' && i != size - 1)
			j[n++] = sep[k++];
	}
	j[n] = '\0';
	return (j);
}

// int main(void)
// {
//     char *str[] = {"123", "456", "789", "012", "345"};
//     // char **strs = str;
//     char cat[] = " & ";
//     char *name;
//     name = ft_strjoin(5, str, cat);
//     printf("%s", name);
//     printf("\n");
//     printf("%p", name);
//     free(name);
//     return 0;
// }

// int    main(void)
// {
//     char    *str[] = {"yuikeda", "", "shshimad", "shogura", "kaneko", "matsuo"};
//     char    *sep = "12";
//     char    *result;

//     result = ft_strjoin(7, str, sep);
//     printf("%s", result);
//     free(result);
// }