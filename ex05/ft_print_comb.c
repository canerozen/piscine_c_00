#include <unistd.h>

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;
	char	da;
	char	db;
	char	dc;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				da = a + '0';
				db = b + '0';
				dc = c + '0';
				write(1, &da, 1);
				write(1, &db, 1);
				write(1, &dc, 1);
				if (!(a == 7 && b == 8 && c == 9))
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
