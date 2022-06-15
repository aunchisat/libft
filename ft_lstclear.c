/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atapanak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:01:12 by atapanak          #+#    #+#             */
/*   Updated: 2022/05/17 18:01:12 by atapanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tlst;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tlst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tlst;
	}
}