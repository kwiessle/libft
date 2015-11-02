/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 16:36:28 by kwiessle          #+#    #+#             */
/*   Updated: 2015/10/13 11:32:43 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ns;

	if (!s)
		return (NULL);
	ns = ft_strnew(len);
	i = 0;
	while (i < len)
	{
		ns[i] = s[start];
		start++;
		i++;
	}
	return (ns);
}
