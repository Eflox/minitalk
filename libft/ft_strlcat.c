/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:43:20 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:43:22 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*pdst;
	const char	*psrc;
	size_t		n;
	size_t		deltalen;

	pdst = dst;
	psrc = src;
	n = size;
	while (n-- != 0 && *pdst)
		pdst++;
	deltalen = pdst - dst;
	n = size - deltalen;
	if (n == 0)
		return (deltalen + ft_strlen(psrc));
	while (*psrc)
	{
		if (n != 1)
		{
			*pdst++ = *psrc;
			n--;
		}
		psrc++;
	}
	*pdst = '\0';
	return (deltalen + (psrc - src));
}
