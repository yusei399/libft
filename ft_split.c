/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuseiikeda <yuseiikeda@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:41:47 by yuseiikeda        #+#    #+#             */
/*   Updated: 2022/04/10 12:22:10 by yuseiikeda       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>
#include    <unistd.h>
#include    <stdlib.h>

int	ft_check_char(char    c, char    *charset)
{
	int    i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	if (c == '\0')
	{
		return (1);
	}
	return (0);
}

int	ft_word_num(char    *str, char    *charset)
{
	int    i;
	int    word_num;

	word_num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check_char(str[i], charset) == 0)
		{
			if (ft_check_char(str[i + 1] == 1, charset) == 1)
			{
				word_num++;
			}
		}
		i++;
	}
	return (word_num);
}

void	ft_pushwords(char    *result, char    *str, char    *charset)
{
	int    i;

	i = 0;
	while (ft_check_char(str[i], charset) == 0)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
}

void	ft_makeresults(char **result, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check_char(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_check_char(str[i + j], charset) == 0)
				j++;
			result[word] = (char *)malloc(sizeof(char) * (j + 1));
			ft_pushwords(result[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char **ft_split(char const *s, char c);
{
	char	**result;
	int		words;

	words = ft_word_num(str, charset);
	result = (char **)malloc(sizeof(char *) * (words));
	ft_makeresults(result, str, charset);
	return (result);
}

// int    main()
// {
// 	char str[] = "12345a45678ahjkkl";
// 	char charset[]= "a";
// 	char **result;

// 	result = ft_split(str, charset);
// 	printf("%s\n", result[0]);
// 	printf("%s\n", result[1]);
// 	printf("%s\n",result[2]);
// }

// int	main(void)
// {
// 	char	*str = "";

// 	printf("start\n");
// 	char	*charset = "";

// 	char	**str_split = ft_split(str, charset);
// 	int	i = 0;

// 	while (str_split[i])
// 	{
// 		pritnf("%s\n", str_split[i]);
// 		i++;
// 	}
// 	return (0);
// }