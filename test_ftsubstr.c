/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrsubstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:09:29 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 18:13:38 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftsubstr(char *str, unsigned int start, size_t len, char *expected)
{
	int result = 0;
	char	*ret = ft_substr(str, start, len);

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
