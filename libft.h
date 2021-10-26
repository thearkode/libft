#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>

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

#endif