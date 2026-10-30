/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bazinga.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcanals <pcanals@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:01:31 by pcanals           #+#    #+#             */
/*   Updated: 2026/10/30 11:17:41 by pcanals          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BAZINGA_H
# define BAZINGA_H
#include "ft_atoi.h"

typedef struct s_config
{
	int height;
	int width;
	int i;
	int len;
	int op;
	int y;

}	t_config;

# define BAZINGA	"BAZINGA"
# define FILLER	'.'

# define ERRORUSAGE "Error: usage ./a.out <width> <height>.\n"
# define ERRORWIDTH "Error: width must contain only digits.\n"
# define ERRORHEIGHT "Error: height must contain only digits.\n"
# define ERRORMALLOC "Error: malloc failed.\n"

# endif