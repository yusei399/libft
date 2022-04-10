#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int	ft_strlen(char *str)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (str[i] != '\0')
// 	{
// 		count++;
// 		i++;
// 	}
// 	return (count);
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*t;
	int		len;

	len = strlen(src);
	t = malloc(sizeof(char) * (len + 1));
	if (t == NULL)
	{
		return (NULL);
	}
	ft_strcpy(t, src);
	return (t);
}

// int	main(void)
// {
// 	char *test;
// 	char *dup;

// 	test = "wertyuio";
// 	printf("test = %s\n", test);
// 	dup = ft_strdup(test);
// 	printf("dup  = %s\n", dup);
// 	printf("%p\n", dup);
// 	free(dup);
// }