/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:47:36 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:47:38 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	x;
	char			*sub;

	x = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) - (size_t)start <= len)
		len = ft_strlen(s) - (size_t)start;
	if ((size_t)start > ft_strlen(s))
		len = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if (!(start > ft_strlen(s)))
	{
		while (x < len && s[start + x])
		{
			sub[x] = s[start + x];
			x++;
		}
	}
	sub[x] = '\0';
	return (sub);
}
