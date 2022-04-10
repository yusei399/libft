#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int        ft_isalnum(int c);
int        ft_isalpha(int c);
int        ft_isascii(int c);
int        ft_isdigit(int c);
int        ft_isprint(int c);
int		   ft_strlen(char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
//size_t    ft_strlen(const char *s);

//void    ft_bzero(void *s, size_t n);
//void    *ft_memset(void *b, int c, size_t len);
//void    *ft_memcpy(void *dest, const void *src, size_t n);
//void    *ft_memmove(void *dest, const void *src, size_t len);


#endif