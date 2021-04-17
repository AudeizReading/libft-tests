/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftitoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 13:44:48 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 18:17:58 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftitoa(int n, char *expected)
{
	/* Need to detect heapleaks */
	int result = 0;
	char	*ret = ft_itoa(n);

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
