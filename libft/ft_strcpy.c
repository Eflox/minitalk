/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:42:48 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:42:49 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int	x;

	x = 0;
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = src[x];
	return (dest);
}
