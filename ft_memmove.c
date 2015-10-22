/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/13 10:48:52 by kwiessle          #+#    #+#             */
/*   Updated: 2015/10/13 11:11:08 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = ft_memalloc(len);
	while (i < len)
	{
		tmp[i] = *(char *)src;
		src++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(char *)dst = tmp[i];
		dst++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		i++;
		dst--;
	}
	return (dst);
}
