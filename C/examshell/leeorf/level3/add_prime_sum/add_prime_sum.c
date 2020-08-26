#include <unistd.h>
#include <stdio.h>

int	ft_argc(int argc)
{
	if(argc == 2)
		return 1;	
	return 0;	
}

int 	ft_atoi(char *str)
{
	int 	i;
	int 	sign;
	int 	result;

	i = 0;
	sign = 1;
	result = 0;

	if(!str[i])
		return 0;
	while(str[i] >= ' ' && str[i] <= '\r')
		i++;
	if(str[i] == '-' || str[i] == '+')
		if(str[i++] == '-')
			sign = -1;
	while(str[i])
		result = result * 10 + str[i++] - '0';
	return sign * result;
}

_Bool 	is_prime(int num)
{
	int 	i;

	i = 2;
	if (num == 1)
		return 0;
	while(i < num)
	{
		if(num % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int 	ft_add_prime_sum(int num)
{
		int 	i;
		int 	sum;

		if(num < 0)
			return 0;
		i = 1;
		sum = 0;
		while(i <= num)
		{
			if(is_prime(i))
				sum += i;
			i++;
		}
		return sum;
}

void 	ft_put_number(int num)
{
	char 	c;
	
	if(num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
	} else
	{
		ft_put_number(num / 10);
		ft_put_number(num % 10);
	}
	
}

int main(int argc, char *argv[])
{
	int num;
	int sum;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		sum = ft_add_prime_sum(num);
		ft_put_number(sum);
	} else
	{
		ft_put_number(0);
	}
	write(1, "\n", 1);
	return 0;
}
