/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoabrug <manoabrug@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:20:32 by manoabrug         #+#    #+#             */
/*   Updated: 2026/04/13 11:14:17 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int ft_strlen(const char *str);
int	ft_atoi(const char *str);
int	ft_strncmp(const char *s1, const char *s2, int n);
int ft_isalpha(char c);
int ft_isdigit(char c);
int ft_isalnum(int c);
int	ft_isascii(unsigned char c);
int ft_isprint(unsigned char c);
char ft_tolower(char c);
int ft_toupper(char c);
int	ft_strlcpy (char *dst, const char *src, int dstsize);
size_t ft_strlcat(char *dest, const char *src, size_t size);
char *ft_strrchr(char *str, char c);
char *ft_strnstr(char *str, const char *word, int len);
char *ft_strchr(char *str, char c);
void ft_bzero(char *str, size_t size);
void ft_memset(void *pointer, int value, size_t count);
int ft_memcmp(const void *s1, const void *s2, size_t size);
void *ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
void *ft_memcpy(void *dest, const void *src, size_t size);
void *ft_memmove(void *dest, const void *src, size_t size);
char *ft_itoa(int nb);
char *ft_substr(char const *str, unsigned int start, size_t len);
char *ft_strdup(char *src);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *str, char const *set);
char *ft_strmapi(char const *str, char (*f)(unsigned int, char));
void ft_striteri(char *str, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *str, int fd);
void ft_putnbr_fd(int n, int fd);
char **ft_split(char const *str, char c);
void *ft_calloc(size_t elementCount, size_t elementSize);
//int ft_printf(const char *, ...);
