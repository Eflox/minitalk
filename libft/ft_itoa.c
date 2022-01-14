/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:34:46 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:34:48 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getlen(int nb)
{
	int	x;

	x = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		x = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	size_t	nb;
	int		minus;
	int		size;
	char	*new;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = getlen(n);
	nb = n;
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	new[size] = '\0';
	if (n < 0)
	{
		minus = 1;
		new[0] = '-';
		nb = -n;
	}
	while (size-- > minus)
	{
		new[size] = (nb % 10) + '0';
		nb /= 10;
	}
	return (new);
}
