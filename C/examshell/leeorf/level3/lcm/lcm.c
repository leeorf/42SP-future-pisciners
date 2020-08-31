int	hcf(unsigned int a, unsigned int b)
{
	while(1)
	{
		if(a == 0)
			break;
		b %= a;
		if(b == 0)
			break;
		a %= b;
	}
	
	return (!b) ? a : b;
}

int	lcm(unsigned int a, unsigned int b)
{
	int	res;

	if(!a || !b)
		return 0;

	res = (a * b) / (hcf(a, b));
	return res;
}
