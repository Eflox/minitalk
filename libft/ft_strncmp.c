/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:45:09 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:45:11 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	int		result;

	x = 0;
	result = 0;
	if (!n || !s1 || !s2)
		return (0);
	while ((s1[x] != '\0') && (s2[x] != '\0')
		&& (s1[x] == s2[x]) && (n - 1 - x))
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
