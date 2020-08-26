#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char *ft_alpha_mirror(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 219 - str[i];
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 155 - str[i];
		}

		i++;
	}

	return str;
}


int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		char *newString;

		newString = ft_alpha_mirror(argv[1]);
		ft_putstr(newString);
	}
	ft_putchar('\n');

	return 0;
}
