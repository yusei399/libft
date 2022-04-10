/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:36:32 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/10 11:56:42 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_word_num(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

int main()
{
	char	*str;
	char	word;
	int		num;

	str  = "asdf\nghjkls\ndfghj";
	word = '\n';
	num = ft_word_num(str, word);
	printf("%d",num);
}

// char **ft_split(char const *s, char c)
// {
// 	char *str;

// 	str = 
// }