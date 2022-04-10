/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:48:02 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/07 20:29:02 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

// int main(void)
// {
//     int c;
//     c = 'a';

//     printf("%d",ft_isprint(c));
// }