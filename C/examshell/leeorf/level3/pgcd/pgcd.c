#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_pgcd(int a, int b)
{
	if(a < 0 || b < 0)
		return 0;

	while(1)
	{
		if(a == 0)
			break;
		b = b % a;
		if(b == 0)
			break;
		a = a % b;
	}
	return (!b) ? a : b;
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	res;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = ft_pgcd(a, b);
		printf("%d", res);
	}
	printf("\n");
	return 0;
}
