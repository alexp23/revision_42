#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int i2;

	i = 0;
	i2 = 0;
	while (dest[i])
		i++;
	while (src[i2])
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	return (dest);
}

int		main(int argc, char **argv)
{
	char *dest;
	
	dest = malloc(sizeof(*dest) * 40);
	strcpy(dest, "un ");
	ft_strcat(dest, argv[1]);
	printf("%s\n", dest);
	return (0);
}
