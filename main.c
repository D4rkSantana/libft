/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:36:58 by esilva-s          #+#    #+#             */
/*   Updated: 2020/01/29 15:37:03 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char A[50];
    int A1;
    char B[50];
    char C[50];
    char D[50];
    int D1;
    char E[50];
    char *F;
    char *G;
    char H[50];
    char *I;
    char *X;

    printf("\n==Inicio protocolo de testes==\n");

    // --------strlen---------------- //
    // ------------------------------ //
    ft_strlcpy(A, "AABBCCDD", sizeof(A));
    A1 = ft_strlen(A);
    printf("\n-----Teste strlen-----\nValor esperado : 8\nValor retornado: %d\n\n", A1);    
    // --------strlcpy--------------- //
    // ------------------------------ //
    ft_strlcpy(B, "CCCC", sizeof(B));
    printf("\n-----Teste strlcpy-----");
    printf("\nValor esperado : CCCC\nValor retornado: %s\n\n", B);   
    // --------strlcat--------------- //
    // ------------------------------ //
    ft_strlcpy(C, "AAAA", sizeof(C));
    ft_strlcat(C, B, sizeof(C));
    printf("\n-----Teste strlcat-----");
    printf("\nValor esperado : AAAACCCC\nValor retornado: %s\n\n", C);
    // --------strncmp--------------- //
    // ------------------------------ //
    ft_strlcpy(D, C, sizeof(D));
    D1 = ft_strncmp(C, "AAABCCCC", sizeof(C));
    printf("\n-----Teste strncmp-----");
    printf("\nValor esperado : -1\nValor retornado: %d\n\n", D1);
    // --------strchr---------------- //
    // ------------------------------ //
    ft_strlcpy(E, "aaabbbcccddd", sizeof(E));
    F = ft_strchr(E, 'b');
    printf("\n-----Teste strchr-----");
    printf("\nValor esperado : bbbcccddd\nValor retornado: %s\n\n", F);
    // --------strrchr--------------- //
    // ------------------------------ //
    G = ft_strrchr(E, 'b');
    printf("\n-----Teste strrchr-----");
    printf("\nValor esperado : bcccddd\nValor retornado: %s\n\n", G);
    // --------strnstr--------------- //
    // ------------------------------ //
    ft_strlcpy(H, "bbb", sizeof(H));
    I = ft_strnstr(E, H, sizeof(E));
    printf("\n-----Teste strnstr-----");
    printf("\nValor esperado : bbbcccddd\nValor retornado: %s\n\n", I);
    // --------strdup---------------- //
    // ------------------------------ //
    X = ft_strdup(H);
    printf("\n-----Teste strdup-----");
    printf("\nValor esperado : bbb\nValor retornado: %s\n\n", X);
    return (0);
}