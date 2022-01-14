/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 00:43:44 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 00:43:48 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

int	sendit(pid_t pid, char c)
{
	int		bit;

	bit = 64;
	while (bit != 0)
	{
		if (c >= bit)
		{
			c -= bit;
			if (kill(pid, SIGUSR2) == -1)
				error("Failed sending");
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
				error("Failed sending");
		}
		bit /= 2;
		usleep(100);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;

	if (argc != 3)
		error("Wrong number of arguments");
	pid = ft_atoi(argv[1]);
	i = 0;
	while (argv[2][i])
	{
		sendit(pid, argv[2][i]);
		i++;
	}
	sendit(pid, '\n');
	return (0);
}
