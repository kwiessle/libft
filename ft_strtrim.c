/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:35:48 by kwiessle          #+#    #+#             */
/*   Updated: 2015/11/23 18:37:03 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(s[i]) == 1)
	{
		i++;
		if (s[i] == '\0')
			return (ft_strdup(""));
	}
	len = ft_strlen(s);
	if (s[len] == '\0')
		len--;
	while (ft_isspace(s[len]) == 1)
		len--;
	return (ft_strsub(s, i, len - i + 1));
}
