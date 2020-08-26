int is_power_of_2(unsigned int n)
{
	if (n == 0) return 0;

	int i;
	
	i = n;
	while(i >= 2)
	{
		if(i % 2 != 0) return 0;	
		i /= 2;
	}
	return 1;
}
