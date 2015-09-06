#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while((str[i] == to_find[i]) && str[i] && to_find[i])
	{
		i++;
		if ((str[i] == '\0') && (to_find[i] == '\0'))
			return (str);
	}
	return ("(null)");
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	char *str;

	str = ft_strstr(argv[1], argv[2]);
	printf("%s\n", str);
	return (0);
}
