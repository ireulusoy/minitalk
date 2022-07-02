/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <irulusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:33:50 by irulusoy          #+#    #+#             */
/*   Updated: 2022/07/01 19:29:00 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <signal.h>
# include <unistd.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_atoi(char *a);
int		ft_putchar(int c);
int		ft_putstr(char *var);
int		ft_printf(const char *var, ...);

#endif
