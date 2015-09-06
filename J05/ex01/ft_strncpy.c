#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	dest = src;
	while (i < n)
	{
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char *str;
	
	str = ft_strncpy(str, argv[1], 3);
	printf("n = 3\n%s\n", str);
	return (0);
}
