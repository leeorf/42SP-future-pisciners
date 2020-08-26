#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_countdown()
{
	int i;
	i = 57;

	while(i >= 48)
	{
		ft_putchar(i);
		i--;
	}
}

int main()
{	
	ft_countdown();
	ft_putchar('\n');
	return 0;
}
