/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:52:08 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/11 15:52:08 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
        return(1);
    else
        return(0);
}