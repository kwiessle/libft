
#include "libft.h"

char	*ft_strcat(char *s1, const char* s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s2)
		return (s1);
	str = malloc(sizeof(ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[j] != '\0')
	{
		str[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
	{
		str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
