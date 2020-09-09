#include <unistd.h>
#include <stdio.h>

void	rev_wstr(char *str)
{
	int 	i;
	int	j;

	i = 0;
	while(str[i])
		i++;
	
	j = i;
	while(i > 0)
	{
		if(str[i] == ' ')
		{
			write(1, str + i + 1, j - i - 1);
			write(1, " ", 1);
			j = i;
		}
		i--;
	}
	write(1, str + i, j);

}

int 	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);

	return 0;
}
