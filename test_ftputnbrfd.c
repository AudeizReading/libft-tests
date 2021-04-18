/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftputnbrfd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 17:09:07 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 18:36:54 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftputnbrfd(int n, char	*expected)
{
	char	*filename = "ftputnbrfd.tmp";
	char	*buffer = NULL;
	int		fd = open(filename, O_RDWR | O_CREAT, 0644);
	int		ret = 0;

	if (fd != -1)
	{
		buffer = calloc(sizeof(*buffer), strlen(expected) + 1);
		if (buffer != NULL)
		{
			ft_putnbr_fd(n, fd);
			lseek(fd, 0, 0);
			buffer = ft_getstr_fd(buffer, strlen(expected) + 1, fd);
			if (!strcmp(buffer, expected))
				ret = 1;
			close(fd);
			unlink(filename);
			free(buffer);
		}
	}
	return (ret);
}
