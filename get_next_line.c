/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 18:44:20 by kwiessle          #+#    #+#             */
/*   Updated: 2016/03/29 16:22:54 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				read_file(int const fd, char **text)
{
	int			ret;
	char		buf[BUFF_SIZE + 1];
	char		*tmp;

	tmp = NULL;
	ret = -42;
	while (!ft_strchr(*text, EOL))
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) < 0)
			return (-1);
		else
		{
			buf[ret] = 0;
			tmp = *text;
			if (!(*text = ft_strjoin(*text, buf)))
				return (-1);
			free(tmp);
		}
		if (ret < BUFF_SIZE)
			return (ret);
	}
	return (ret);
}

char			*get_line(char *text, char **line)
{
	char		*tmp;
	int			i;

	tmp = NULL;
	i = 0;
	while (text[i])
	{
		if (text[i] == EOL)
		{
			*line = ft_strsub(text, 0, i);
			tmp = text;
			text = ft_strdup(text + (i + 1));
			free(tmp);
			return (text);
		}
		i++;
	}
	*line = ft_strdup(text);
	ft_strclr(text);
	return (text);
}

int				get_next_line(int const fd, char **line)
{
	static char	*file[MAX_FD];
	int			ret;

	if (fd < 0 || fd >= MAX_FD || !line)
		return (-1);
	if (!(file[fd]))
		file[fd] = ft_strnew(0);
	if ((ret = read_file(fd, &file[fd])) == -1)
		return (-1);
	file[fd] = get_line(file[fd], line);
	if (!ft_strlen(file[fd]) && !ft_strlen(*line) && !ret)
		return (0);
	else
		return (1);
}
