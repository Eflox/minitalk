/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:32:05 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 01:32:08 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space_minus(const char *str, int *minus)
{
	int		x;
	long	nb;

	x = 0;
	*minus = 1;
	nb = 0;
	while (str[x] == '\t' || str[x] == '\v' || str[x] == '\n'
		|| str[x] == '\r' || str[x] == '\f' || str[x] == ' ')
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			*minus = *minus * (-1);
		x++;
	}
	return (x);
}

int	ft_atoi(const char *str)
{
	int		x;
	long	nb;
	int		minus;

	if (!str)
		return (0);
	nb = 0;
	x = ft_space_minus(str, &minus);
	while (str[x] >= '0' && str[x] <= '9')
	{
		if ((nb * 10) + str[x] - 48 >= nb)
			nb = (nb * 10) + str[x] - 48;
		else
		{
			if (minus == -1)
				return (0);
			else
				return (-1);
		}
		x++;
	}
	if (str[x] == ('-' | '+'))
		return (0);
	else
		return (nb * minus);
}
