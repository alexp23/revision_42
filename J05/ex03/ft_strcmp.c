#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[3][0] == '1')
		printf("%d\n", strcmp(argv[1], argv[2]));
	if (argv[3][0] == '2')
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}
