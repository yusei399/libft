/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:00:15 by yuikeda           #+#    #+#             */
/*   Updated: 2022/04/07 20:01:14 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*memset(void *s, int c, size_t n)
{
	char	*j;
	size_t	i;

	i = 0;
	j = (char *)s;

	while (i < n)
	{
		j[i] = c;
		i++;
	}
	return (s);
}


