/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcanals <pcanals@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 08:35:30 by pcanals           #+#    #+#             */
/*   Updated: 2026/10/30 11:55:48 by pcanals          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_calc.h"
#include <stdio.h>

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

int checkup_signe(char *str, t_calc	*calc)
{
	const char *charset = "+-==!=<>";
	
	if (calc->i == 2)
	{
		if ((str[0] == '!' || str[0] == '=') && (str[1] == '='))
			return (0);
		else
			return (1);
		calc->j++;
	}
	else if (calc->i == 1)
	{
		while (charset[calc->j] != '\0')
		{
			if (str[0] == charset[calc->j])
				return (0);
			calc->j++;
		}
		return (1);
	}
	else
		return(put_error(ERRORD));
}


void	ft_calc(t_calc *calc, char *av)
{
	if (av[0] == '+')
		calc->op = calc->val1 + calc->val2;
	else if (av[0] == '-')
		calc->op = calc->val1 - calc->val2;
	else if (av[0] == '*')
		calc->op = calc->val1 * calc->val2;
	else if (av[0] == '/')
		calc->op = calc->val1 / calc->val2;
	else if (av[0] == '=' && av[1] == '=')
		calc->op = calc->val1 == calc->val2;
	else if (av[0] == '!' && av[1] == '=')
		calc->op = calc->val1 != calc->val2;
	else if (av[0] == '<')
		calc->op = calc->val1 < calc->val2;
	else if (av[0] == '>')
		calc->op = calc->val1 > calc->val2;
}

int main(int ac, char **av)
{
	t_calc	calc;

	calc.val1 = ft_atoi(av[1]);
	calc.val2 = ft_atoi(av[3]);
	calc.j = 0;
	
	ft_strlen(av[2], &calc);
	checkup_signe(av[2], &calc);
	if (ac != 4)
		return(put_error(ERRORU));
	if (checkup_num(av[1]))
		return(put_error(ERROR1N));
	if (checkup_num(av[3]))
		return(put_error(ERROR3N));
	if (av[2][0] == '/' && calc.val2 == 0)
		return(put_error(ERRORS));
	ft_calc(&calc, av[2]);
	printf(calc.op);
	return (0);
}
