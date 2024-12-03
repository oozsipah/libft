/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_denemesi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah < oozsipah@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 06:50:03 by oozsipah          #+#    #+#             */
/*   Updated: 2024/12/02 08:39:41 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int ft_isSpace(int c)
{
    return ((c == 32) || (c >= 9 && c <= 13));
}

int ft_isOperand(int c)
{
    if ((c >= 40 && c <= 43) || (c == 45) || (c == 47))
        return (1);
    return (0);
}

char    **ft_isPrantheses(char **s)
{
    int i;
    // int Condition = 1;
    i = 0;
    // while (Condition)
    // {
    while (s[i] && s[i][0] != '(')
        i++;
        // if (s[i][0] == '(')
        //     return(&s[i]);
        // if (s[i][0] == ')')
        //     Condition = 0;
        //     break ;
        // i++;
    // }
    return (&s[i]);
}

char **ft_calculateParantheses(char **s)
{
    int i = 0;
    int Proc = 0;  // Operatör
    int res = 0;   // Sonuç
    char *num1 = ft_calloc(10, 1);  // Sayılar için bellek ayır
    char *num2 = ft_calloc(10, 1);
    int num1_index = 0, num2_index = 0;
    
    s = ft_isPrantheses(s);  // Parantez içini bul

    // Parantez kapanana kadar devam et
    while (s[i] && s[i][0] != ')')  
    {
        // Boşlukları atla
        while (ft_isSpace(s[i][0]))
            i++;

        // Sayıyı al
        while (ft_isdigit(s[i][0]))
        {
            num1[num1_index++] = s[i][0];  // Sayıyı num1 dizisine ekle
            i++;
        }

        // Sayılar arasında boşlukları ve operatörleri ayır
        while (ft_isSpace(s[i][0]))
            i++;

        // Operatörü al
        if (ft_isOperand(s[i][0]))
        {
            Proc = s[i][0];  // Operatör
            i++;
        }

        // İkinci sayıyı al
        while (ft_isdigit(s[i][0]))
        {
            num2[num2_index++] = s[i][0];  // Sayıyı num2 dizisine ekle
            i++;
        }

        // Sayıları sonlandır ve işlemi yap
        if (num1_index > 0 && Proc && num2_index > 0)
        {
            num1[num1_index] = '\0';  // Sayıları sonlandır
            num2[num2_index] = '\0';  // Sayıları sonlandır

            // İşlem yap (öncelik sırasına göre)
            if (Proc == '+')
                res = ft_atoi(num1) + ft_atoi(num2);
            else if (Proc == '-')
                res = ft_atoi(num1) - ft_atoi(num2);
            else if (Proc == '*')
                res = ft_atoi(num1) * ft_atoi(num2);
            else if (Proc == '/')
                res = ft_atoi(num1) / ft_atoi(num2);
        }

        // Sonuçları num1 ve num2 dizilerine sıfırla, yeni işlem için
        num1_index = 0;
        num2_index = 0;
    }

    // Sonucu dizinin ilk elemanına ekle
    s[0] = ft_itoa(res);
    s[1] = NULL;

    // Belleği temizle
    free(num1);
    free(num2);

    return s;
}

char **ft_parser(char *s)
{
    char tokens[100];
    int i = 0;
    int j = 0;

    while (s[i])
    {
        while (ft_isSpace(s[i]))  // Boşlukları atla
            i++;
        
        if (ft_isdigit(s[i]))  // Sayı varsa
        {
            while (ft_isdigit(s[i]))
                tokens[j++] = s[i++];  // Sayıyı tokens dizisine ekle
            tokens[j++] = ',';  // Sayılar arasında virgül koy
        }
        else if (ft_isOperand(s[i]))  // Operatör varsa
        {
            tokens[j++] = s[i++];  // Operatörü tokens dizisine ekle
            tokens[j++] = ',';  // Operatörler arasında virgül koy
        }
    }

    tokens[j] = '\0';  // Diziyi sonlandır
    return (ft_split(tokens, ','));  // Virgülle ayırarak döndür
}
int main(int ac, char **av)
{
    (void) ac;
    int i = 0;
    char **res = ft_parser(av[1]);
    char **s = ft_calculateParantheses(res);
    while (res[i])    
        printf("%s ", res[i++]);
    printf("\n\n");
    i = 0;
    while (s[i])
        printf("%s ", s[i++]);
    return (0);
}