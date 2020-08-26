char	*ft_strdup(char *src)
{
	char *p;
	char *dest;
	int len;

	len = 0;
	while(src[len])
	{	
		len++;
	}

	dest = malloc(len + 1);
	p = dest;

	while(*src)
	{
		*p = *src;
		src++;
		p++;
	}
	*p = '\0';
	
	return dest;
}
