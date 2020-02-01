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

void ft_putchar(char c);
void ft_putstr(const char *str);

size_t  ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strrchr(const char *s, int c);
char *ft_strchr(const char *s, int c);
char *ft_strnstr(const char *s1, const char *s2, size_t len);
char *ft_strxnstr(const char *s1, const char *s2, size_t len);
char *ft_strdup(const char *s1);

#endif
