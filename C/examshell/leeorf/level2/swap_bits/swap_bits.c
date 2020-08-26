unsigned char	swap_bits(unsigned char octet)
{
	unsigned char octetSwapped;

	octetSwapped = (octet << 4) | (octet >> 4);
	return octetSwapped;
}
