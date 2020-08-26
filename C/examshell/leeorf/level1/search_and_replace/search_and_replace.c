#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
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

char *ft_search_and_replace(char *str, char *arg2, char *arg3)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == arg2[0])
		{
			str[i] = arg3[0];
		}

		i++;
	}
	return str;
}

int main(int argc, char *argv[])
{

	if(argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
	{
		char *replacedString;

		replacedString = ft_search_and_replace(argv[1], argv[2], argv[3]);
		ft_putstr(replacedString);
	}
	ft_putchar('\n');

	return 0;
}
