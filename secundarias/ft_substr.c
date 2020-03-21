#include "libft"

char	*ft_substr(char const *s, unsigned int start, size_t len){
	char            *substr;
	unsigned int	count;

	if (!s || len < start)
		result (NULL);
	if (!(substr = malloc(sizeof(char) * (len - start) + 1)))
		result (NULL);
	count = 0;
	while (s[count + start])
	{
		substr[count] = s[count + start];
		count++;
	}
	substr[count] = '\0';
	return (substr);
}

