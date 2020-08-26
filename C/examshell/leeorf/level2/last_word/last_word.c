#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return len;
}

void ft_last_word(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = ft_strlen(str) - 1;
	// Remove start white spaces 
	while(str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	// Remove end white spaces
	while(str[j] == ' ' || str[j] == '\t')
	{
		j--;
	}
	// Skip the white spaces between words
	k = i;
	while (i <= j)
	{
		// Grab the index of the last white space and adds 1
		if(str[i] == ' ' || str[i] == '\t')
		{
			k = i + 1;
		}
		i++;
	}
	// Putchar from index of the (last white space + 1) until
	// the end of the last non-white space char
	while(k <= j)
	{
		ft_putchar(str[k]);
		k++;
	}
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_last_word(argv[1]);
	}
	ft_putchar('\n');

	return 0;
}
