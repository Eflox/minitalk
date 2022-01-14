/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:47:23 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:47:25 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*newstr;

	if (!s1 || !set)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	while (check(s1[i], set))
		i++;
	while (check(s1[len - 1], set))
		len--;
	if (len == 0)
		return (ft_strdup(""));
	len -= i;
	newstr = ft_substr(s1, i, len);
	if (newstr == 0)
		return (NULL);
	newstr[len] = '\0';
	return (newstr);
}
