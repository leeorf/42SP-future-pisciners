#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_inter(char *str1, char *str2)
{
	int i;
	int j;
	int k;

	i = 0;
	while(str1[i] != '\0')
	{
		// Check for duplicate char in str1
		k = 0;
		while(k < i)
		{
			if(str1[i] == str1[k])
			{
				break;
			}
			k++;
		}
		// If no duplicate
		if (i == k)
		{
			j = 0;
			// Scan the str2 searching for non-duplicate char
			while(str2[j] != '\0')
			{
				if(str2[j] == str1[i])
				{
					ft_putchar(str2[j]);
					j++;
					break;
				}
				j++;
			}
		}
		// If duplicate just go to the next char on str1
		i++;
	}
}


int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	ft_putchar('\n');

	return 0;
}
