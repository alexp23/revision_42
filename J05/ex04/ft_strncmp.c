#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		ft_atoi(char *str)
{
	int i;
	unsigned int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb);
}

int		main(int argc, char **argv)
{
	if (argc != 5)
		return (0);
	if (argv[4][0] == '1')
		printf("%d\n", strncmp(argv[1], argv[2], ft_atoi(argv[3])));
	if (argv[4][0] == '2')
		printf("%d\n", ft_strncmp(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}
