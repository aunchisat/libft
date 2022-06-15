/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:54:55 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/12 07:54:55 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while ((s1[i] || s2[i]) && (i < n))
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return(((unsigned char)s1[i] - (unsigned char)s2[i]));
        i++;
    }
    return (0);
}