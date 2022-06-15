/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:58:27 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/17 17:58:27 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	count_digit(int a)
{
	size_t	b;

	b = 0;
	if (a > 10 || a < -10)
	{
		b++;
		a = a / 10;
	}
	if (a < 0)
		a = -a;
	while (a > 9)
	{
		b++;
		a = a / 10;
	}
	b++;
	return (b);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		i;
	char	*ans;

	sign = (n < 0);
	i = count_digit(n) + sign;
	ans = malloc(sizeof(char) * (i + 1));
	if (!ans)
		return (NULL);
	ans[i] = 0;
	while (i > 0)
	{
		if (i == 0 && sign == 1)
			break ;
		else if (sign == 1)
			ans[--i] = ((n % 10) * -1) + '0';
		else
			ans[--i] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign == 1)
		ans[0] = '-';
	return (ans);
}