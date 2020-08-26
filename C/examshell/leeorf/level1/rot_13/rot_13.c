#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_rot_13(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			ft_putchar(str[i] + 13);
		}
		else if((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			ft_putchar(str[i] - 13);
		} else
		{
			ft_putchar(str[i]);
		}

		i++;
	}

}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_rot_13(argv[1]);
	}
	
	ft_putchar('\n');

	return 0;
}
