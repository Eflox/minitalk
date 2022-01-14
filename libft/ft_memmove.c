/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:38:06 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:38:08 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			x;
	unsigned char	*pdst;
	unsigned char	*psrc;

	if (!dst || !src)
		return (0);
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	x = -1;
	if (pdst < psrc)
		while (++x < len)
			pdst[x] = psrc[x];
	else
		while (len-- > 0)
			pdst[len] = psrc[len];
	return (dst);
}
