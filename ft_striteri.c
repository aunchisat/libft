/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:48:08 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/12 07:48:08 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlen(const char *str)

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned long int   i;

    i = 0;
    while (*s)
    {
        f(i, s);
        i++;
        s++;
    }
}