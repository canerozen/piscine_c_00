#	include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c1 = (a / 10) + '0';
			c2 = (a % 10) + '0';
			c3 = (b / 10) + '0';
			c4 = (b % 10) + '0';
			write(1, &c1, 1);
			write(1, &c2, 1);
			write(1, " ", 1);
			write(1, &c3, 1);
			write(1, &c4, 1);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
