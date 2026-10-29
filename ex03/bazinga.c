/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bazinga.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcanals <pcanals@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:01:23 by pcanals           #+#    #+#             */
/*   Updated: 2026/10/29 11:14:21 by pcanals          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "bazinga.h"

int checkup_num(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <='9'))
			return (1);
		i++;
	}
	return (0);
}

int ft_strlen(char *str, t_config	*config)
{
	config->i = 0;
    while (str[config->i] != '\0')
        config->i++;
	return (config->i);
}

int put_error(char *input)
{
	while (*input != '\0')
	{
		write(2, input, 1);
		input++;
	}
	return (1);
}

int ft_atoi(char *str)
{
    int result;
    int i;
    int signe;

    result = 0;
    i = 0;
    signe = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            signe = -signe;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * signe);
}

void    printlgrid(t_config	*config)
{
	int *grid;

	grid = malloc(config->width * config->height * sizeof(int)); // largeur * hauteur
	
	free(grid);

}

int main(int ac, char **av)
{
	t_config	config;
	config.height = ft_atoi(av[1]); // hauteur
	config.width = ft_atoi(av[2]); // largeur
	// config.comptheiht = 0;
	// config.comptwight = 0;
	// config.len = config.width + 2;
	ft_strlen(av[1], &config);
	if(ac != 3)
		return(put_error(ERRORUSAGE));
	if(checkup_num(av[2]))
		return(put_error(ERRORWIDTH));
	if(checkup_num(av[1]))
		return(put_error(ERRORHEIGHT));
	if(&malloc == NULL)
		return(put_error(ERRORMALLOC));
	printlgrid(&config);
	return (0);
}