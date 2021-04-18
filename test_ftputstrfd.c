/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftputstrfd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:44:16 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 16:34:56 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"
static char	*ft_getstr_fd(char *s, size_t len, int fd)
{
	int		c;
	char	*p_s = s;

	while (--len > 0 && (c = ft_getchar_fd(fd)) != EOF)
		if ((*p_s++ = c) == '\0')
			break;
/*	*p_s = 0;*/
	return ((c == EOF && p_s == s) ? NULL : s);
}

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
