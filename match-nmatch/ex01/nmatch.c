#include <stdio.h>

int		match(char *s1, char *s2)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while(s1[i] && s1[i])
	{
		if (s1[i] == s2[i])
			i ++;
		else if ((s1[i] == '*') || (s2[i] == '*'))
		{
			nb++;
			i ++;
		}
		else
			return (0);
		if ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
			return (0);

	}
	return (nb);
}


int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%d\n", match(argv[1], argv[2]));
}
