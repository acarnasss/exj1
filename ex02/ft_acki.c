/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acki.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcanals <pcanals@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:38:58 by pcanals           #+#    #+#             */
/*   Updated: 2026/10/30 12:57:20 by pcanals          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_acki.h"

int ft_check_num(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int put_error(char *input)
{
	while (*input != '\0')
	{
		write(1, input, 1);
		input++;
	}
	
}
int main(int ac, char **av)
{
	t_config	config;
	
	if (ac != 2)
		return (put_error(ERRORUSAGE));
	if (ft_check_num(av[1]))
		return (put_error(ERRORDIGITS));
	if ()
		return (put_error(ERRORARG));
	
}