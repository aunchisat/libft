/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:26:42 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/16 22:26:42 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	if (d < s && s != d)
	{
		while (len--)
		{
			*d = *s++;
			d++;
		}
	}
	else if (s != d)
	{
		d = dst + (len - 1);
		s = src + (len - 1);
		while (len--)
		{
			*d = *s--;
			d--;
		}
	}
	return (dst);
}