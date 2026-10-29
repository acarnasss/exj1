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