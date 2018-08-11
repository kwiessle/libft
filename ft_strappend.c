/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiefer <kiefer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:00:29 by kiefer            #+#    #+#             */
/*   Updated: 2018/08/08 17:01:30 by kiefer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strappend(char *chain, char new)
{
    char *result;
    size_t len;
    size_t i;

    len = ft_strlen(chain);
    i = 0;

    if (!(result = (char *)malloc(sizeof(char) * len + 2)))
        return NULL;
    while (chain[i])
    {
        result[i] = chain[i];
        i++;
    }
    result[len] = new;
    result[len + 1] = '\0';
    return result;
}
