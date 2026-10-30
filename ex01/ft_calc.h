/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcanals <pcanals@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 09:03:40 by pcanals           #+#    #+#             */
/*   Updated: 2026/10/30 11:53:54 by pcanals          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CALC_H
# define FT_CALC_H
# include "ft_atoi.h"

typedef struct s_calc
{
	int val1;
	int val2;
	int op;
	int i;
	int j;
}	t_calc;

#define ERROR1N "Error: arg 1 must be a number.\n"
#define ERRORS "Error: arg 2 must be a sign (+ - * / == != < >).\n"
#define ERROR3N "Error: arg 3 must be a number.\n"
#define ERRORD "Error: division by zero.\n"
#define ERRORU "Error: usage ./a.out <int> <sign> <int>.'\n"

#endif