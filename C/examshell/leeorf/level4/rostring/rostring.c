#include <unistd.h>
#include <stdlib.h>

void	rostring(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;

	// Remove start white space
	while(str[i] == ' ')
		i++;

	// Save position of the start of the first word
	j = i;

	// Remove first word and save position of the end of the first word
	while(str[i] && str[i] != ' ')
	{
		i++;
	}
	k = i;

	// Display string without first word and with only one space between words
	while(str[i])
	{	
		if (str[i] != ' ')
		{
			while(str[i] && str[i] != ' ')
			{
				write(1, &str[i], 1);
				i++;
			}
			write(1, " ", 1);
			continue;
		}
		i++;
	}

	// Display first word in the end of the string
	write(1, &str[j], k - j);
}


int main(int argc, char **argv)
{
	if(argc > 1)
	{
		int	i;

		i = 1;
		while(argv[i])
		{
			rostring(argv[i]);
			i++;
		}
		write(1, "\n",1);
	} else
	{
		write(1, "\n", 1);
	}

	return 0;
}
