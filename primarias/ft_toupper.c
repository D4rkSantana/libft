int ft_toupper(int c)
{
	if(!(c > 96 && c <123))
		return (c);
	c -= 32;
	return (c);
}