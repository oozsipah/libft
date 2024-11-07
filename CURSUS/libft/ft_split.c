/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:52:45 by oozsipah          #+#    #+#             */
/*   Updated: 2024/11/07 04:02:36 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int word_len(char const *s, char c)
{
    int i;

    i = 0;
    while(s[i] && s[i] != c)
        i++;
    return (i);
}
static int word_count(char const *s, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while(s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        count++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (count);
}
static char *free_all(char **s)
{
    int i;

    i = 0;
    while (s[i++])
        free(s[i]);
    free(s);
    return NULL;
}

char    **ft_split(char const *s, char c)
{
    char **res;
    int wc;
    int i;
    int j;
    int k;

    if(!s)
        return NULL;
    i = 0;
    j = 0;
    k = 0;
    wc = word_count(s, c);
    if(!(res = (char **)malloc(sizeof(char *) * (wc + 1))))
        return NULL;
    while(s[i] && s[i] == c)
        i++;
    while(s[i])
    {
        k=0;
        if(!(res[j]=(char *)malloc(sizeof(char) * word_len(s, c) + 1)))
            return (free_all(res));
        while(s[i] && s[i] != c)
            res[j][k++]=s[i++];
        while(s[i] && s[i] == c)
            i++;
        res[j][k]='\0';
        j++;
    }
    res[j]=NULL;
    return res;
}
