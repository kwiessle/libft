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
	char		*ns;
	size_t		i;
	size_t		j;

	ns = ft_strnew(len);
	if (!s || !ns)
		return (NULL);
	i = 0;
	j = 0;
	while (start--)
		i++;
	while (j < len)
	{
		ns[j] = s[i];
		j++;
		i++;
	}
	ns[j] = '\0';
	return (ns);
}
