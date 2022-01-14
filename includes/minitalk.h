/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chde-mar </var/mail/chde-mar>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 00:44:11 by chde-mar          #+#    #+#             */
/*   Updated: 2021/08/31 00:44:56 by chde-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include "../libft/libft.h"

typedef struct s_sig
{
	int		size;
	int		pid;
	char	c;
}			t_sig;

void	error(char *str);

#endif
