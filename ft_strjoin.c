/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 16:58:58 by kwiessle          #+#    #+#             */
/*   Updated: 2015/12/17 14:13:14 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ns;
	unsigned int	i;
	unsigned int	j;

	ns = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!s1 || !s2 || !ns)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ns[i + j] = s2[j];
		j++;
	}
	ns[i + j] = '\0';
	return (ns);
}
