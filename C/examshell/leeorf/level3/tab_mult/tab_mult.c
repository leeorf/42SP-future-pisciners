#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;

	while(str[i])
	{
		result = 10 * result + (str[i] - '0');
		i++;
	}

	return result;	
}

void	print_num(int num)
{
	char c;

	if(num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
	} else
	{
		print_num(num / 10);
		print_num(num % 10);
	}
}

void	ft_tab_mult(int num)
{
	int	i;

	i = 1;
	while(i < 10)
	{
		print_num(i);
		write(1, " x ", 3);
		print_num(num);
		write(1, " = ", 3);
		print_num(i * num);
		write(1, "\n", 1);
		i++;
	}
}

int 	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_tab_mult(ft_atoi(argv[1]));
	} else
		write(1, "\n", 1);
}
