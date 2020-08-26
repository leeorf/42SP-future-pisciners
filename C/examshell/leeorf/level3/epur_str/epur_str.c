#include <unistd.h>

int ft_len(char *str)
{
	int i;

	i = 0;	
	while(str[i])
		i++;
	return i;
}

void ft_epur_str(char *str)
{
	int i;
	int j;

	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	j = ft_len(str) - 1;
	while(str[j] == ' ' || str[j] == '\t')
		j--;	

	while(i <= j)
	{
		if(str[i] == ' ' || str[i] == '\t')
		{
			if(str[i-1] == ' ' || str[i-1] == '\t')
			{
				i++;
				continue;
			}
		}
		write(1, &str[i], 1);
		i++;
	}
}


int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_epur_str(argv[1]);
	}
	write(1, "\n", 1);

	return 0;
}
