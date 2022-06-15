/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:29:11 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/26 17:29:11 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*s2;

	if (s == NULL)
		return (NULL);
	if (len >= (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	s2 = (char *)malloc(sizeof (char) * len + 1);
	size = ft_strlen(s);
	if (!s2)
		return (NULL);
	i = 0;
	if (start < size)
	{
		while (i < len)
		{
			s2[i] = s[start++];
			i++;
		}
	}
	s2[i] = '\0';
	return (s2);
}
