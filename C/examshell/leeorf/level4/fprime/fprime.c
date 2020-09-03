#include <stdio.h>
#include <stdlib.h>

_Bool	is_prime(int num)
{
	int	i;

	if(num == 1)
		return 0;

	i = 2;
	while(i <= (num / 2))
	{
		if(num % i == 0)
			return 0;	
		i++;
	}

	return 1;
}


void	fprime(int num)
{
	int	i;

	if(is_prime(num) || num == 1)
	{
		printf("%d", num);
		return;
	}

	i = 2;
	while(i <= num)
	{
		if(is_prime(i) && (num % i == 0))
		{
			printf("%d", i);
				if(num != i)
					printf("*");
			num /= i;
			i = 1;
		}	
		i++;	
	}	
}


int	 main(int argc, char *argv[])
{
	if(argc == 2)
	{
		fprime(atoi(argv[1]));
	}
	printf("\n");

	return 0;
}
