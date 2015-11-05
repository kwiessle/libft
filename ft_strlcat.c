
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len_dst;
	size_t		len_src;

	len _dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size >= len_dst)
		return (len_dst + size);
	else
		ft_strncat(dst, src, size - len_dest - 1)
	return (len_dest + len_src);
}
