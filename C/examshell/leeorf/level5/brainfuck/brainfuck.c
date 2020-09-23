#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 2048


int 	main(int argc, char **argv)
{
	int	i;
	int	loop;
	char	*pointer;	

	if(argc == 2)
	{
		pointer = (char *) malloc(sizeof(char) * BUFF_SIZE + 1);

		if (!pointer)
			return (-1);

		i = 0;
		loop = 0;
		while(argv[1][i])
		{	
			switch(argv[1][i])
			{
				case '>': pointer++;
					  break;
				case '<': pointer--;
					  break;
				case '+': (*pointer)++;
					  break;
				case '-': (*pointer)--;
					  break;
				case '.': write(1, &*pointer, 1);
					  break;	
				case '[': 
					  if (!*pointer)
					  {
						loop = 1;
						while(loop)
						{
							i++;
							argv[1][i] == '[' ? loop++ : loop;
							argv[1][i] == ']' ? loop-- : loop;
						}
					  }
					  break;
				case ']':
					  if (*pointer)
					  {
						loop = 1;
						while(loop)
						{
							i--;
							argv[1][i] == '[' ? loop-- : loop;
							argv[1][i] == ']' ? loop++ : loop;
						}
					  }
					  break;
				default: break;
			}
			i++;
		}
	} else
	{
		write(1, "\n", 1);
	}

	return 0;
}
