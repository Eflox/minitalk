/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:37:23 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:37:24 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*un_s;

	if (!s)
		return (0);
	x = 0;
	un_s = (unsigned char *)s;
	while (x < n)
	{
		if (un_s[x] == (unsigned char)c)
			return (un_s + x);
		x++;
	}
	return (0);
}
