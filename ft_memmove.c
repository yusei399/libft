/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:52:52 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/07 23:03:05 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	if (dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (src < dest)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((unsigned char *)dest);
}

// int main()
// {
//     char dst[] = "123456789";

//     printf("dst: %s\n", dst);
//     ft_memmove(dst + 2, dst, 5);
//     printf("dst: %s\n", dst);
// }

// int main()
// {
//     char normal[] = "abcdefg";
//     char src[] = "PAIN";
//     printf("dst    : %s\n", normal);
//     printf("src    : %s\n", src);
//     ft_memmove(normal, src, 4);
//     printf("new_dst: %s\n", normal);
//     char dst1[] = "123456789";
//     char dst2[] = "123456789";
//     //               "123412389"
//     printf("\noverrap\n");
//     printf("\ndst < src\n");
//     printf("dst    : %s\n", dst1);
//     printf("dst + 4: %s\n", dst1 + 4);
//     ft_memmove(dst1, dst1 + 4, 3);
//     printf("new_dst: %s\n", dst1);
//     printf("\ndst > src\n");
//     printf("dst + 4: %s\n", dst2 + 4);
//     printf("dst    : %s\n", dst2);
//     ft_memmove(dst2 + 4, dst2, 3);
//     printf("new_dst: %s\n", dst2);
// }