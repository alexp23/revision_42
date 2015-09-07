#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int i2;

	i = 0;
	i2 = 0;
	while (dest[i])
		i++;
	while (src[i2] && i2 < nb)
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
	ft_strncat(dest, argv[1], 3);
	printf("nb = 3\n%s\n", dest);
	return (0);
}
