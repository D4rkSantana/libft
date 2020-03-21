#include "libft.h"

int in_set(char *c, char const *set){
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int count_not_set(const char *s1, const char *set){
	int count;
	int total;

	count = 0;
	total = 0;
	while (s1[count])
	{
		if (!(in_set(s1[count])))
			total++;
		count++;
	}
	return (total);
}

char	*ft_strtrim(char const *s1, char const *set){
	int	count;
	int	size;
	char	*new;

	if (set == NULL || s1 == NULL)
		return (NULL);
	size = 0;
	count = 0;
	size = count_not_set(s1, set) + 1;
	if (!(new = malloc(sizeof(char) * size)))
		return (NULL);
	while (*s1)
	{
		if (!(in_set(*s1, set)))
			new[count] = *s1;
		count++;
		s1++;
	}
	new[count] = '\0';
	return (new);
}




