#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0') || (str[i] > '9'))
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_str_is_numeric(argv[1]));
	return (0);
}
