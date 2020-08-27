#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	int	i;

	if(start > end)
		arr = (int *) malloc(sizeof(int) * (start - end) + 1);
	else
		arr = (int *) malloc(sizeof(int) * (end - start) + 1);

	i = 0;
	while(start != end)
	{
		arr[i++] = start;
		start += (start > end) ? -1 : 1;
	}

	arr[i] = start;
	return arr;	
}
