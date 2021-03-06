/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftputstrfd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:44:16 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 16:59:40 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftputstrfd(char *s)
{
	char	*filename = "ftputstrfd.tmp";
	char	*buffer = NULL;
	int		fd = open(filename, O_RDWR | O_CREAT, 0644);
	int		ret = 0;

	if (fd != -1 && s != NULL)
	{
		buffer = calloc(sizeof(*buffer), strlen(s) + 1);
		if (buffer != NULL)
		{
			ft_putstr_fd(s, fd);
			lseek(fd, 0, 0);
			buffer = ft_getstr_fd(buffer, strlen(s) + 1, fd);
			if (!strcmp(buffer, s))
				ret = 1;
			close(fd);
			unlink(filename);
			free(buffer);
		}
	}
	else if (s == NULL && buffer == NULL)
	{
		ret = 1;
	}
	
	return (ret);
}
