#inlcude "libft.h"

char	*ft_strmapi(char const *a, char (*f)(unsigned int, char))
{
	char	*newstr;
	int	i;

	i = 0;
	if(!newstr = malloc(strlen(a) * sizeof(char)))
		return (NULL);
	while(a[i] != '\0')
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
