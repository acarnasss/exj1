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

int ft_strlen(char *str, t_calc	*calc)
{
	calc->i = 0;
    while (str[calc->i] != '\0')
        calc->i++;
	return (calc->i);
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

int    printlgrid(t_config config)
{
	int *grid;

	grid = malloc(config->width * config->height * sizeof(int)); // largeur x nombre de hauteur

	free(grid);
}

int main(int ac, char **av)
{
	t_config	config;
	config.height = av[1]; // hauteur
	config.width = av[2]; // largeur
	// config.comptheiht = 0;
	// config.comptwight = 0;
	// config.len = config.width + 2;
	if(ac != 3)
		write(put_error(ERRORUSAGE));
	if(checkup_num(av[2]))
		write(put_error(ERRORWIDTH));
	if(checkup_num(av[1]))
		write(put_error(ERRORHEIGHT));
	if(malloc == NULL)
		write(put_error(ERRORMALLOC));
	printline(&config)
}