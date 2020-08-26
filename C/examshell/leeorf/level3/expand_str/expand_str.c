#include <unistd.h>

void ft_expand_str(char *str)
{
	int i;
	int trigger;
	
	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;

	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t')
			trigger = 1;
		if(!(str[i] == ' ' || str[i] == '\t'))
		{
			if(trigger)
				write(1, "   ", 3);
			trigger = 0;
			write(1, &str[i], 1);
		}	
		i++;
	}
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_expand_str(argv[1]);
	}
	write(1, "\n", 1);

	return 0;
}
