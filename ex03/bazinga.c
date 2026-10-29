/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bazinga.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcanals <pcanals@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:01:23 by pcanals           #+#    #+#             */
/*   Updated: 2026/10/29 14:33:29 by pcanals          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "bazinga.h"

int checkup_num(char *str);


int ft_strlen(char *str);


int put_error(char *input);


int ft_atoi(char *str);


int    printltab(t_config	*config)
{
	char *tab;
	int i;
	int len;
	int op;
	int y;

	i = 0;
	tab = malloc(config->width * config->height * sizeof(char)); // largeur * hauteur
	while (i < config->width * config->height)
	{
		tab[i++] = FILLER;
	}
	len = ft_strlen(BAZINGA);

	while (i < len)
	{
		tab[op + i] = BAZINGA[i];
		i++;
	}
	y = 0;
	while (y < config->width)
	{
		write(1, &tab[config->width], config->height);
		write(1, "\n", 1);
		y++;
	}
	free(tab);
	if(tab == NULL)
		return(put_error(ERRORMALLOC));
	return (0);
}

int main(int ac, char **av)
{
	t_config	config;
	config.height = ft_atoi(av[1]); // hauteur
	config.width = ft_atoi(av[2]); // largeur
	
	ft_strlen(av[1]);
	if(ac != 3)
		return(put_error(ERRORUSAGE));
	if(checkup_num(av[2]))
		return(put_error(ERRORWIDTH));
	if(checkup_num(av[1]))
		return(put_error(ERRORHEIGHT));
	return(printltab(&config));
	return (0);
}
