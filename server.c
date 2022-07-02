/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:19:19 by irulusoy          #+#    #+#             */
/*   Updated: 2022/07/02 16:33:38 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	binary_to_char(int c)
{
	static char	binary;
	static int	i = 7;
// fsafsa
	binary <<= 1;
	if (c == SIGUSR1)
		binary |= 1;
	if (i == 0)
	{
		write(1, &binary, 1);
		i = 7;
		binary = 0;
	}
	else
		i--;
}

int	main(void)
{
	int	pid;

	pid = getpid();
	signal(SIGUSR1, binary_to_char);
	signal(SIGUSR2, binary_to_char);
	ft_printf("%d\n", pid);
	while (1)
		pause();
}
