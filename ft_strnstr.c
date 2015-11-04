#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	i = 0;
	j = 0;
	if (s1[i])
	{
		if (s2[j] == '\0')
			return ((char*)s1);
		while (s1[i] && i < n)
		{
			ptr = (char*)&s1[i];
			while (s1[i] == s2[j] && i < n)
			{
				i++;
				j++;
			}
			if (s2[j] == '\0')
				return (ptr);
			j = 0;
			i++;
		}
	}
	return (NULL);
}
