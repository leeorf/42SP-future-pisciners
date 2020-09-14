#include <stdio.h>

void	sort_in_tab(int *tab, unsigned int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 1;
	while(i < size)
	{
		j = i;
		while(j > 0)
		{
			if(tab[j] < tab[j - 1])
			{
				tmp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tmp;
			}
			j--;
		}
		i++;
	}

	i = 0;
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}


int main()
{
	int	size;
	int	tab[] = {2, 7, 3, 4, 9};

	size = 5;

	sort_in_tab(tab, size);

	return 0;
}
