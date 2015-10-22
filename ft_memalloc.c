/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 15:11:53 by kwiessle          #+#    #+#             */
/*   Updated: 2015/10/20 15:09:47 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	mem = (char *)malloc(sizeof(char) * size);
	if (mem == NULL || size == 0)
		return (NULL);
	while (size--)
		mem[size] = 0;
	return ((void *)mem);
}
