/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:49:09 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:49:11 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	x;

	x = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (dst == NULL || src == NULL)
		return (0);
	while (x < size - 1 && src[x] != '\0')
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (ft_strlen(src));
}
