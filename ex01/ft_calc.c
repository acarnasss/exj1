/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcanals <pcanals@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 08:35:30 by pcanals           #+#    #+#             */
/*   Updated: 2026/10/28 11:47:16 by pcanals          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_calc.h"

int checkup_num(char *str)
{	
	while (str[calc->val1] != '\0')
	{
		if (str[calc->val1] >= '0' && str[calc->val1] <='9' || str[calc->val1] >= '-' || str[calc->val1] >= '+')
			calc->val1++;
		else
			return (1);
	}
	while (str[calc->val2] != '\0')
	{
		if (str[calc->val2] >= '0' && str[calc->val2] <='9' || str[calc->val2] >= '-' || str[calc->val2] >= '+')
			calc->val2++;
		else
			return (1);
	}
}
int checkup_signe(char *str)
{
	const char *charset = "+-*/==!=<>";
	
	if (str[i] == 2)
	{

		
	}
	
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

int ft_calc(int num1, int op, int num2)
{
		if (op == '+')
			return(num1 + num2);
		else if (op == '-')
			return(num1 - num2);
		else if (op == '*')
			return(num1 * num2);
		else if (op == '/')
			return(num1 / num2);
		else if (op == '=')
			return(num1 == num2);
		else if (op == '!')
			return(num1 != num2);
		else if (op == '<')
			return(num1 < num2);
		else if (op == '>')
			return(num1 > num2);
}

int main(int ac, char **av)
{
	t_calc	calc;

	calc.val1 = 0;
	calc.val2 = 0;
	calc.result = 0;
	calc.i = 0;
	calc.j = 0;
	
	if (ac != 0)
		write(1, "Error: usage ./a.out <int> <sign> <int>.'\n'", 41);
	ft_calc(av[1], av[2], av[3]);
	return (0);
}


	// switch (op)
	// {
	// 	case '+':
	// 		result = num1 + num2;
	// 		break;
	// 	case '-':
	// 		result = num1 - num2;
	// 		break;
	// 	case '*':
	// 		result = num1 * num2;
	// 		break;
	// 	case '/':
	// 		result = num1 / num2;
	// 		break;
	// 	case '==':
	// 		result = num1 == num2;
	// 		break
	// 	case '!=':
	// 		result = num1 != num2;
	// 		break;
	// 	case '<':
	// 		result = num1 < num2;
	// 		break;
	// 	case '>':
	// 		result = num1 > num2;
			
	// }
	
	// while (num1[calc->val1] != '\0' && num2[calc->val2] != '\0')
	// {
	// 	if (!(num1[calc->val1] >= '0' && num1[calc->val1] <='9' || num1[calc->val1] >= '-')
	// 		calc->val1++;
	// 	else if (!(num1[calc->val1] >= '0' && num1[calc->val1] <='9' || num2[calc->val2] >= '-')
	// 		calc->val2++;
	// 	return (0);
	// }