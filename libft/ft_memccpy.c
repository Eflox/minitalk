/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:37:12 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:37:14 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*str1;
	unsigned const char	*str2;

	if (!n || !dst || !src)
		return (0);
	str1 = dst;
	str2 = src;
	while (n-- != 0)
	{
		*str1++ = *str2++;
		if (*str1 == (unsigned char)c)
			return (str1);
	}
	return (0);
}
