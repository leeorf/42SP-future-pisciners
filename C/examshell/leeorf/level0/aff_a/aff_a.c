#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_aff_a(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
			break;
		}		
		i++;
	}
}
 
int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_aff_a(argv[1]);
		ft_putchar('\n');
	} else
	{	
		ft_putchar('a');
		ft_putchar('\n');
	}

	return 0;
}
