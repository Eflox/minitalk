/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:45:30 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:45:32 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, int n)
{
	int		x;
	char	*target;

	x = 0;
	target = malloc(sizeof(char) * (n + 1));
	if (!target)
		return (NULL);
	while (x < n)
	{
		target[x] = s1[x];
		x++;
	}
	target[x] = '\0';
	return (target);
}
