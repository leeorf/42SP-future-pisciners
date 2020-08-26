#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_maff_alpha()
{
	int i;
	i = 65;

	while(i <= 90)
	{
		if(i % 2 == 0) // even = upper
		{
			ft_putchar(i);
		} else // odd = lower
		{
			ft_putchar(i + 32);
		}
		i++;
	}
}

int main()
{
	ft_maff_alpha();
	ft_putchar('\n');
	return 0;
}
