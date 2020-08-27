#include <stdio.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return c;
}

int	get_digit(char c, int str_base)
{
	int max_digit;
	if(str_base <= 10)
		max_digit = (str_base + '0') - 1;
	else
		max_digit = ((str_base - 10) + 'a') - 1;	

	if(c >= '0' && c <= '9' && c <= max_digit)
		return c - '0';
	else if(c >= 'a' && c <= 'f' && c <= max_digit)
		return 10 + (c - 'a');

	return (-1);
}


int	ft_atoi_base(const char *str, int str_base)
{
	int result;
	int i;
	int sign;


	sign = 1;
	result = 0;

	if(str[0] == '-')
		sign = -1;	

	i = 0;
	while(str[i])
	{
		result = result * str_base + get_digit(to_lower(str[i]), str_base);
		i++;
	}

	return result;
}


int main(int argc, char *argv[])
{
	int result;
	result = ft_atoi_base(argv[1], 16);
	printf("%d\n", result);
	return 0;
}
