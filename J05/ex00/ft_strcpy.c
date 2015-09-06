#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	dest = src;
	return (dest);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char *str;
	
	str = ft_strcpy(str, argv[1]);
	printf("%s\n", str);
	return (0);
}
