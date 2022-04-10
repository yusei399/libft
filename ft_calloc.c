/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:37:32 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/08 22:28:09 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*tmp;

	tmp = malloc(n * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, n * size);
	return (tmp);
}
