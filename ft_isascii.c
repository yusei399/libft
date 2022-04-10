/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:45:40 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/07 20:28:14 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// int main(void)	
// {
// 	int c;
// 	c = ' ';

// 	printf("%d",ft_isascii(c));
// }