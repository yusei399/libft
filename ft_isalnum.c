/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:37:48 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/07 20:30:38 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalnum(int c)
{
	return (('0' <= c && c <= '9')
		|| ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

// int main(void)
// {
// 	int i;
// 	i = ' ';

// 	printf("%d", ft_isalnum(i));
// }