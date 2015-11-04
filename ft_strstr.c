#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char*)s1);
	while (s1[i] != '\0')
	{
		while (s1[i] != s2[j] && s1[i])
		{
			i++;
		}
		ptr = (char*)&s1[i];
		while (s1[i] == s2[j] && s1[i])
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return (ptr);
		j = 0;
	}
	return (NULL);
}
