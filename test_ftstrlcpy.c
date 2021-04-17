/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrlcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:42:04 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 17:55:29 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftstrlcpy(char *dst, char *src, size_t size, char *expected)
{
	size_t	res;
	char	c;

	c = (!strcmp(src, "1")) ? 0 : 'A';
	memset(dst, c, 10);
	res = ft_strlcpy(dst, src, size);
	if (res == strlen(src) && !strcmp(dst, expected))
		return (1);
	return (0);
}
