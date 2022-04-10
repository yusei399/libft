/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:44:22 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/08 09:44:02 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	size;
	char	*d;
	char	*s;

	size = 0;
	d = (char *)dest;
	s = (char *)src;

	while (size < n)
	{
		d[size] = s[size];
		size++;
	}
	return (dest);
}