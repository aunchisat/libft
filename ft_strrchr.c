/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:28:03 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/26 17:28:03 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int ch)
{
	char	c;
	char	*save;

	c = ch;
	save = (char *)0;
	while (*s)
	{
		if (*s == c)
		{
			save = (char *)s;
		}
		s++;
	}
	if (c == 0)
		save = (char *)s;
	return (save);
}