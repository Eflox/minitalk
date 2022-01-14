/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:44:16 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:44:18 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	x;
	char	*mem;

	if (s == NULL || f == NULL)
		return (NULL);
	mem = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (mem == NULL)
		return (NULL);
	x = -1;
	while (++x < ft_strlen(s))
		mem[x] = (*f)((unsigned int)x, s[x]);
	mem[x] = '\0';
	return (mem);
}
