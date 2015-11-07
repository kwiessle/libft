/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 16:46:57 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/12 17:12:14 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	char	*ret;

	ret = ft_strnew(0);
    ft_strdel(&ret);

	ft_strdel(NULL);
	ret = ft_strnew(4);
	ft_strdel(&ret);
    return (0);
}
