/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bazinga.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcanals <pcanals@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:01:23 by pcanals           #+#    #+#             */
/*   Updated: 2026/10/30 11:54:57 by pcanals          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "bazinga.h"

int	checkup_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	put_error(char *input)
{
	while (*input != '\0')
	{
		write(2, input, 1);
		input++;
	}
	return (1);
}

int	printltab(t_config	*config)
{
	char	*tab;
	char	i;

	tab = malloc(config->width * config->height * sizeof(char));
	while (i < config->width * config->height)
		tab[i++] = FILLER;
	config->len = ft_strlen(BAZINGA);
	config->op = (config->height / 2) * config->width
		+ (config->width - config->len) / 2;
	i = 0;
	while (i < config->len)
	{
		tab[config->op + i] = BAZINGA[i];
		i++;
	}
	while (config->y < config->height)
	{
		write(1, &tab[config->y * config->width], config->width);
		write(1, "\n", 1);
		config->y++;
	}
	if (tab == NULL)
		return (put_error(ERRORMALLOC));
	free(tab);
	return (0);
}

int	main(int ac, char **av)
{
	t_config	config;

	config.height = ft_atoi(av[2]);
	config.width = ft_atoi(av[1]);
	config.len = ft_strlen(BAZINGA);
	config.y = 0;
	ft_strlen(av[1]);
	if (ac != 3)
		return (put_error(ERRORUSAGE));
	if (checkup_num(av[1]))
		return (put_error(ERRORWIDTH));
	if (checkup_num(av[2]))
		return (put_error(ERRORHEIGHT));
	if (config.width < config.len + 2)
		config.width = config.len + 2;
	if (config.height < 3)
		config.height = 3;
	return (printltab(&config));
	return (0);
}
