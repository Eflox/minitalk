/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:45:57 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:45:59 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hs;
	size_t	ndle;

	hs = 0;
	if (ft_strlen(needle) == 0 || !*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	if (ft_strlen(haystack) == 0 || haystack == NULL)
		return (NULL);
	while (haystack[hs] != '\0')
	{
		ndle = 0;
		while (haystack[hs + ndle] == needle[ndle] && (hs + ndle) < len)
		{
			ndle++;
			if (needle[ndle] == '\0')
				return ((char *)&haystack[hs]);
		}
		hs++;
	}
	return (0);
}
