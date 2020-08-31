#include <unistd.h>

char	to_upper(char c)
{
	if(c >= 'a' && c <= 'z')
		return (c - 32);
}

char	to_lower(char c)
{
	if(c >= 'A' && c <= 'Z')
		return (c + 32);
}


void	ft_rstr_capitalizer(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		str[i] = to_lower(str[i]);

		if(str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
			str[i] = to_upper(str[i]);
		
		write(1, &str[i], 1);	
		i++;
	}
}


int 	main(int argc, char *argv[])
{
	int	i;

	if(argc > 1)
	{	
		i = 1;
		while(argv[i])
		{
			ft_rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	} else
	{
		write(1, "\n", 1);
	}
	return 0;
}
