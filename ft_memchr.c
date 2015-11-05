

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		letter;
	size_t				i;

	if (!s)
		return (NULL);
	str = (unsigned char *)s;
	letter = (unsigned char)c;
	i = 0;
	while (i < n)
		{
			if (str[i] == letter)
				return (str + i);
			i++;
		}
	return (NULL);
}
