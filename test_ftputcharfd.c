/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftputcharfd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:44:58 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 15:42:18 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftputcharfd(char c)
{
	char	*filename = "ftputcharfd.tmp";
	char	buffer;
	int		fd = open(filename, O_RDWR | O_CREAT, 0644);
	int		ret = 0;

	if (fd != -1)
	{
		ft_putchar_fd(c, fd);
		lseek(fd, 0, 0);
		buffer = ft_getchar_fd(fd);
		if (buffer == c)
			ret = 1;
		close(fd);
		unlink(filename);
	}
	return (ret);
}
