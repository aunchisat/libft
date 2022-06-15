/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 07:42:32 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/12 07:42:32 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlen(const char *str);

void    *ft_memcpy(void *dst, void const *src, size_t len);

char    *ft_strdup(const char *str)
{
    char    *copy;
    unsigned int    len;

    len = (unsigned int)(ft_strlen(str) + 1);
    copy = malloc(len * sizeof(char));
    if(!(copy))
        return (NULL);
    ft_memcpy(copy, str, len);
    return(copy);
}