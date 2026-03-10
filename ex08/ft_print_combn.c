#include <unistd.h>

void	print_tab(int *tab, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

int	is_last(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (tab[i] != 10 - n + i)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (1)
	{
		print_tab(tab, n);
		if (is_last(tab, n))
			break ;
		write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && tab[i] == 10 - n + i)
			i--;
		tab[i]++;
		j = i + 1;
		while (j < n)
		{
			tab[j] = tab[j - 1] + 1;
			j++;
		}
	}
}
