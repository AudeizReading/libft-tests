/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftmemcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:08:12 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/15 13:05:09 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftmemcpy(void)
{
	char	*src = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
					Maecenas nec ante rhoncus felis ullamcorper tincidunt vel \
					quis velit. Fusce sit amet ante tempus augue convallis \
					pharetra eu at ligula. Phasellus bibendum quam placerat, \
					vulputate est vel quam.";
	char	dest[250];
	int		res;

	res = test_ftmemcpy(dest, src, 10) && test_ftmemcpy(dest, src, 50)\
		  && test_ftmemcpy(dest, src, 250) && test_ftmemcpy(dest, src, 0)\
		  && test_ftmemcpy(dest, src, strlen(src) - 15)\
		  && test_ftmemcpy(dest, src, strlen(dest));
	/* It does segfault when dst, or src is NULL, and when len bigger than
	** expected, don't do the test here, because I don't know yet get the
	** segfault signal */
	eval_test("ft_memcpy", res);
}
