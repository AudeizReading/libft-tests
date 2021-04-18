/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:52:29 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 16:52:56 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

char	*ft_getstr_fd(char *s, size_t len, int fd)
{
	int		c;
	char	*p_s = s;

	while (--len > 0 && (c = ft_getchar_fd(fd)) != EOF)
		if ((*p_s++ = c) == '\0')
			break;
/*	*p_s = 0;*/
	return ((c == EOF && p_s == s) ? NULL : s);
}

