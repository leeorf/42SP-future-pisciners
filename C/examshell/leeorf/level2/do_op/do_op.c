#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_do_op(char *arg1, char *operator, char *arg3)
{
	int num1;
	int num2;

	num1 = atoi(arg1);
	num2 = atoi(arg3);

	switch(*operator)
	{
		case '+': return num1 + num2;
		case '-': return num1 - num2;
		case '*': return num1 * num2;
		case '/': return num1 / num2;
		case '%': return num1 % num2;
		default:
		printf("No such operator\n");
		return -1;
	}
}

int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		int result;

		result = ft_do_op(argv[1], argv[2], argv[3]);
		printf("%d\n", result);
	} else
	{
		ft_putchar('\n');
	}

}
