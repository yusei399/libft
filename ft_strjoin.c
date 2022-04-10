/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:05:54 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/09 15:16:34 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	i = ft_len(s1) + ft_len(s2);
	result = (char *)malloc(sizeof(char ) * i + 1);
	if (!result)
		return (NULL);
	j = 0;
	k = 0;
	while (s1[j])
		result[k++] = s1[j++];
	j = 0;
	while (s2[j])
		result[k++] = s2[j++];
	result[k] = '\0';
	return (result);
}

// int	main()
// {
// 	char *s1;
// 	char *s2;
// 	char *str;
// 	s1 = "dfghjk";
// 	s2 = "ghjk";

// 	str = ft_strjoin(s1,s2);
// 	printf ("%s",str);
// 	s1 = NULL;
// 	s2 = NULL;
// 	str = ft_strjoin(s1,s2);
// 	printf ("%s",str);
// }