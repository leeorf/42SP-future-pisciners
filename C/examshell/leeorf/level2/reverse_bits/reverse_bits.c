unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char octetInverted;

	octetInverted = octet << 1;
	return octetInverted;
}
