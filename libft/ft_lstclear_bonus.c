/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:35:34 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:35:36 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	ft_lstclear(&((*lst)->next), del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
