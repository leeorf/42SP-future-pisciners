#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_aff_last_param(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{
	int maxArgIndex;
	maxArgIndex = argc-1;

	if(argc >= 2)
	{
		ft_aff_last_param(argv[maxArgIndex]);
		ft_putchar('\n');
	} else
	{
		ft_putchar('\n');
	}

	return 0;
}
