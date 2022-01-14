/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:37:48 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:37:49 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		x;
	char		*str1;
	const char	*str2;

	str1 = dst;
	str2 = src;
	x = -1;
	if (n == 0 || dst == src)
		return (dst);
	while (++x < n)
		*(str1 + x) = *(str2 + x);
	return (dst);
}
