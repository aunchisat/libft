/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:07:09 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/17 18:07:09 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	size_t			nn;

	ss = (unsigned char *)s;
	nn = 0;
	while (nn < n)
	{
		if (ss[nn] == (unsigned char)c)
			return (ss + nn);
		nn++;
	}
	return (NULL);
}