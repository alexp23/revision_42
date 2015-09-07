#include <stdio.h>

char	*ft_capitalize(char	*str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a'&& str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			else if ((str[i - 1] > 'z') || (str[i - 1] < 'a')) 
				if ((str[i - 1] > 'Z') || (str[i - 1] < 'A'))
					if ((str[i - 1] > '9') || (str[i - 1] < '0'))
						str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s\n", ft_capitalize(argv[1]));
	return (0);
}
