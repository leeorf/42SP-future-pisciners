#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_rotone(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
		{
			ft_putchar(str[i] + 1);
		}
		else if(str[i] == 'z')
		{
			ft_putchar('a');
		}
		else if(str[i] == 'Z')
		{
			ft_putchar('A');
		} else 
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_rotone(argv[1]);
	}

	ft_putchar('\n');

	return 0;
}
