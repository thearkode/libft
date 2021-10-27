#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h> //file controle (open, read, etc)

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str, const void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *str, int c, size_t len);
void ft_bzero(void *str, size_t n);
char *ft_strchr(const char *str, int c);
size_t ft_strlcat(char *dest, const char *src, size_t maxlen);
size_t ft_strlcpy(char *dest, const char *src, size_t destlen);
size_t ft_strlen(char const *str);
int ft_strncmp(const char *str, const char *s, size_t n);
char *ft_strnstr(const char *str, const char *find, size_t len);
char *ft_strrchr(const char *str, int c);
int ft_tolower(int c);
int ft_toupper(int c);
int	ft_atoi(const char *str);
void	*ft_calloc(size_t n, size_t n_size);
char *ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
void ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif