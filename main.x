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
#include <ctype.h>

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
    char J[50];
    char *X;
    int i;
    void *Z;

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
    // ------------isprint----------- //
    // ------------------------------ //
    printf("\n-----Teste isprint-----\n");
    i = -10;
    while (i < 200 && isprint(i) == ft_isprint(i))
    {
        printf("%d OK\n", i);
        i++;
    }
    // ------------isalnum----------- //
    // ------------------------------ //
    printf("\n-----Teste isalnum-----\n");
    i = -10;
    while (i < 200 && isalnum(i) == ft_isalnum(i))
    {
        printf("%d OK\n", i);
        i++;
    }
    // ------------isalpha----------- //
    // ------------------------------ //
    printf("\n-----Teste isalpha-----\n");
    i = -10;
    while (i < 200 && isalpha(i) == ft_isalpha(i))
    {
        printf("%d OK\n", i);
        i++;
    }
    // ------------isascii----------- //
    // ------------------------------ //
    printf("\n-----Teste isascii-----\n");
    i = -10;
    while (i < 200 && isascii(i) == ft_isascii(i))
    {
        printf("%d OK\n", i);
        i++;
    }
    // ------------isdigit----------- //
    // ------------------------------ //
    printf("\n-----Teste isdigit-----\n");
    i = -10;
    while (i < 200 && isdigit(i) == ft_isdigit(i))
    {
        printf("%d OK\n", i);
        i++;
    }
    // ------------------------ //
    // ------------------------------ //
    printf("\n-----Teste memset-----");
    ft_strlcpy(J, "aaabbbcccddd", 50);
    Z = &J;
    ft_memset(Z, 'x', 4);
    // ft_memset(str, c, n);
    printf("\nValor esperado : xxxxbbcccddd\nValor retornado: %s\n\n", J);
    // ------------------------ //
    // ------------------------------ //
    const char ll[50] = "Faxlaa";
    ft_memcpy(Z, ll, ft_strlen(ll) - 1);
    printf("\n-----Teste memcpy -----");
    printf("\nValor esperado : bbb\nValor retornado: %s\n\n", J);
    /* / ------------------------ //
    // ------------------------------ //
    printf("\n-----Teste -----");
    printf("\nValor esperado : bbb\nValor retornado: %s\n\n", );
    */
    ft_strlcpy(J, "AAaaaaaaaa", 50);
    printf("\n %s\n", ft_memccpy(J, "AAcx", 'x', sizeof(ll) + 10)); 
    return (0);
}