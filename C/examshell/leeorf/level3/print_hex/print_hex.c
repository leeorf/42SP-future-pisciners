#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int 	result;

	i = 0;
	result = 0;
	while(str[i])
	{
		result = 10 * result + (str[i] - '0');
		i++;
	}	

	return result;
}


void	ft_print_hex(int num)
{
	int	rem;
	int	i;
	int	j;
	char	hex[50];

	i = 0;
	while(num)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i++] = '0' + rem;
		else
			hex[i++] = 'a' + (rem - 10);			
		num /= 16;
	}

	j = i - 1;
	while(j >= 0)
	{
		write(1, &hex[j], 1);
		j--;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);

	return 0;
}
