void	print_bits(unsigned char octet)
{
	int i;
	int bitToPrint;
	char c;

	i = 7;
	while(i >= 0)
	{
		bitToPrint = octet & (1 << i);
		bitToPrint == 0 ? (c = '0') : (c = '1');
		write(1, &c, 1);
		i--;
	}
}
