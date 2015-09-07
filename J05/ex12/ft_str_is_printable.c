#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 21) || (str[i] == 127))
			return (0);
		i++;
	}
	if (i == 0)
		return (1);
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_str_is_printable("te\nst"));
	return (0);
}
