#include <unistd.h>

void	ft_paramsum(int params_num)
{
	char	params_char;

	if(params_num < 10)
	{
		params_char = params_num + '0';
		write(1, &params_char, 1);
	} else
	{
		ft_paramsum(params_num / 10);
		ft_paramsum(params_num % 10);
	}
}

int main(int argc, char *argv[])
{
	ft_paramsum(argc - 1);
	write(1, "\n", 1);
	return 0;
}
