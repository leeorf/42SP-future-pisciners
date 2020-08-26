#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_union(char *str1, char *str2)
{
	int i;
	int j;
	int k;
	int q;

	i = 0;
	while(str1[i] != '\0')
	{
		k = 0;
		while(k < i)
		{
			if(str1[i] == str1[k])
			{
				break;
			}	
			k++;
		}
		if (k == i)
		{
			ft_putchar(str1[i]);
		}
		i++;
	}

	j = 0;
	while(str2[j] != '\0')
	{
		k = 0;
		while(k < j)
		{
			if(str2[j] == str2[k])
			{
				break;
			}
			k++;
		}
		if (k == j)
		{
			q = i - 1;
			while(q >= 0)
			{
				if(str2[j] == str1[q])
				{
					k++;
					break;
				}
				q--;
			}
			if (k == j)
			{
				ft_putchar(str2[j]);
			}
		}
		j++;
	}
}

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	ft_putchar('\n');

	return 0;
}
