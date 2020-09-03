char	*ft_itoa(int nbr)
{
	char 	*str;
	int	len;
	int	temp;
	int	i;
	_Bool	isNegative;

	isNegative = 0;
	len = 0;
	if(nbr == 0)
		len++;

	if(nbr < 0)
	{
		nbr = -nbr;
		isNegative = 1;
		len++;
	}
	temp = nbr;

	while(temp)
	{
		len++;
		temp /= 10;
	}

	str = (char *) malloc((sizeof(char) * len) + 1);
	
	if (!str)
		return (NULL);

	i = len -1;
	while(i >= 0)
	{
		if(nbr < 10)
		{
			str[i] = nbr + '0';
		} else
		{
			str[i] = (nbr % 10) + '0';
			nbr /= 10;
		}
		i--;
	}

	if(isNegative)
		str[++i] = '-';

	return str;
}
