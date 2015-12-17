/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:31:32 by kwiessle          #+#    #+#             */
/*   Updated: 2015/12/17 14:21:54 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char		*tmp;
	char		*mem;
	size_t		size;

	mem = (char *)(s1 + n);
	size = ft_strlen(s2);
	tmp = (char *)s1;
	if (!size)
		return ((char *)s1);
	while ((tmp = ft_strchr(tmp, *s2)) && tmp <= mem)
	{
		if ((tmp + size <= mem) && !ft_strncmp(tmp, s2, size))
			return (tmp);
		tmp++;
	}
	return (NULL);
}
