#include <unistd.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;

	return len;
}

int	check_parity(char a, char b)
{
	return ((a == '(' && b == ')') || (a == '[' && b == ']')  || (a == '{' && b == '}'));
}

int	check_brackets(char *str)
{
	int	i;
	int	j;
	int	stack[str_len(str) - 1];

	i = 0;
	j = 0;
	while(str[i])
	{
		if(str[i] == '(' || str[i] == '{' || str[i] == '[')
		{
			stack[j] = str[i];
			j++;
		}
		if(str[i] == ')' || str[i] == '}' || str[i] == ']')
		{
			j--;
			if(!check_parity(stack[j], str[i]))
				return 0;
		}
		i++;
	}

	if(j != 0)
		return 0;
	
	return 1;
}


int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int	i;

		i = 1;
		while(argv[i])
		{
			if(check_brackets(argv[i]))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
			i++;
		}
	} else
	{
		write(1, "\n", 1);
	}
	
	return 0;
}
