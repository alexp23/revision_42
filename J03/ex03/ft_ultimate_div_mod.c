#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a_temp;

	a_temp = *a;
	*a = *a / *b;
	*b = a_temp % *b;
}

int		main(void)
{
	int a;
	int b;

	a = 10;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
	return (0);
}
