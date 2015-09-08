char	ft_swap(int *a, int *b)
{
	int a_temp;

	a_temp = *a;
	*a = *b;
	*b = a_temp;
}
