/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:10:41 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/11 17:10:41 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *sum;
    int     len;
    int     i;

    len = ft_strlen (*s1) + ft_strlen (*s2);
    sum = malloc((len + 1) * sizeof(char));
    if (!sum)
        return (NULL);
    i = 0;
    while (i <= ft_trlen (*s1))
    {
        sum[i] = s1[i];
        i++;
    }
    while (i < len)
    {
        sum[i] = s2(i - ft_strlen (*s1));
        i++;
    }
    return (sum);
}