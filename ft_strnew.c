/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 15:53:09 by kwiessle          #+#    #+#             */
/*   Updated: 2015/10/13 11:21:39 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char	*ft_strnew(size_t size)
{
	char	*str;

//	str = (char *)malloc(sizeof(char *) * (size + 1));
	str = malloc(sizeof(size + 1));
	return (str);
}
