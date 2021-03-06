/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:43:41 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:43:43 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	int		s1len;
	int		x;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	x = ft_strlen(s2);
	joint = (char *)malloc(sizeof(char) * (s1len + x + 1));
	if (!joint)
		return (NULL);
	x = -1;
	while (s1[++x])
		joint[x] = s1[x];
	x = -1;
	while (s2[++x])
		joint[s1len + x] = s2[x];
	joint[s1len + x] = '\0';
	return (joint);
}
