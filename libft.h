/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:04:24 by esilva-s          #+#    #+#             */
/*   Updated: 2020/01/29 15:04:27 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef structs_list
{
	void 		*content;
	struct s_list	*next;
}			t_list;

char 	*ft_substr(char const *s, unsigned int start,size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_strtrim(char const *s1, char const *set);
char 	**ft_split(char const *s, char c);
char 	*ft_itoa(int n);
char 	*ft_strmapi(char const *s, char (*f)(unsignedint, char));
void 	ft_putchar_fd(char c, int fd);
void 	ft_putstr_fd(char *s, int fd);
void 	ft_putendl_fd(char *s, int fd);
void 	ft_putnbr_fd(int n, int fd);


int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char *ft_strdup(const char *s1);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
void *ft_memset(void *str, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t l);

#endif
