int	max(int* tab, unsigned int len)
{
	int i;
	int maxValue;

	if(len == 0)
	{
		return 0;
	}
	
	i = 1;
	maxValue = tab[0];
	while(i < len)
	{
		if(tab[i] >= maxValue)
		{
			maxValue = tab[i];
		}  
	i++;
	}

	return maxValue;
}
