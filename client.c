/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:19:19 by irulusoy          #+#    #+#             */
/*   Updated: 2022/06/04 20:33:02 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	char_to_binary(char message, int pid)
{
	int		i;
	int		a;

	i = 8;
	while (i--)
	{
		a = message >> i;
		if (a & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(150);
	}
}

int	main(int argc, char *argv[])
{
	char	*message;
	int		pid;

	if (argc != 3)
		ft_printf("argument number must be 3");
	else
	{
		pid = ft_atoi(argv[1]);
		message = argv[2];
		while (*message)
			char_to_binary(*message++, pid);
	}
}
