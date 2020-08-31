#include <unistd.h>

void	ft_hidenp(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(str2[i])
	{
		if(str2[i] == str1[j])
			j++;
		i++;
	}
	if(!str1[j])
	{
		write(1, "1", 1);
	} else
	{
		write(1, "0", 1);
	}
}


int	main(int argc, char *argv[])
{
	if(argc == 3)
	{
		ft_hidenp(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
