/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paragraph.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcanals <pcanals@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:29:54 by pcanals           #+#    #+#             */
/*   Updated: 2026/10/26 14:12:01 by pcanals          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_paragraph.h"

/*void ft_make_paragraph(char *input, t_config *config)
{
	
}*/

int	put_error(char *input)
{
	while (*input != '\0')
	{
		write(2, input, 1);
		input++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_config	config;

	config.p_nbr = 3;
	config.p_len = 2;
	config.l_len = 5;
	if (ac != 2)
		return (put_error("Error: usage ./a.out <text>.\n"));
	(void) **av;
}

/*int l_len(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
	if (i == 5)
		write(1, '\n', 1);
	else
		return 0;
	
    return (str[i]);
}

#include <stdio.h>
int main()
{
    char nbrchar[] = "testtest";
    printf("%d", l_len(nbrchar));
    return 0;
 }*/
