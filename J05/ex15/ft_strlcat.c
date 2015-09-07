#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *scr, unsigned int size)
{
	return (size);
}

int				main(int argc, char **argv)
{
	char *dest;
	char *src;

	dest = " test_dest ";
	src = " test_src ";
	printf("%d", strlcat(dest, src, 5));
	return (0);
}
