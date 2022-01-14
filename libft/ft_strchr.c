/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:41:49 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:41:51 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;

	if (!s)
		return (NULL);
	pointer = (char *)s;
	while (*pointer)
	{
		if (*pointer == (char)c)
			return (pointer);
		pointer++;
	}
	if (c == 0)
		return (pointer);
	return (NULL);
}
