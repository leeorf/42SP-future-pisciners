char	*ft_strrev(char *str)
{
	int len;
	int i;
	int j;
	char temp;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}

	i = 0;
	j = len - 1;
	while(i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}	

	return str;
}
