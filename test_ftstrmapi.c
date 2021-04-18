/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrmapi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:50:39 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 19:14:58 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

static char	ft_rot13(unsigned int n, char c)
{
	if (n || n == 0)
	{
		if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
			c += 13;
		else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
			c -= 13;
	}
	return (c);
}

int		test_ftstrmapi(char *str, char *expected)
{
	int result = 0;
	char	*ret = ft_strmapi(str, ft_rot13);

	if (ret && expected)
	{
		if (!strcmp(ret, expected))
		{
			result = 1;
		}
	}
	else if (ret == expected)
	{
					result = 1;
	}
	/* Si ca segfault, il est possible que ret ne soit pas malloc -> c'est une
	** erreur */
	free(ret);
	return (result);
}
