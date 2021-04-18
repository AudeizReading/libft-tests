/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 22:03:14 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/18 12:17:16 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftstrjoin(char *s1, char *s2, char *expected)
{
	int result = 0;
	char	*ret = ft_strjoin(s1, s2);

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
