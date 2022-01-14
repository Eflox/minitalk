/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:32:39 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:32:44 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mal;

	mal = malloc(count * size);
	if (mal == NULL)
		return (NULL);
	ft_bzero(mal, count * size);
	return (mal);
}
