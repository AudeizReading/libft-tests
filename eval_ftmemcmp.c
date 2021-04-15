/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftmemcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:13:53 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/15 14:01:45 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftmemcmp(void)
{
	char	*src = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
					Maecenas nec ante rhoncus felis ullamcorper tincidunt vel \
					quis velit. Fusce sit amet ante tempus augue convallis \
					pharetra eu at ligula. Phasellus bibendum quam placerat, \
					vulputate est vel quam.";
	char	dest[250] = "Lorem ipsum dolor sit \0amet, consectetur adipiscing\telit."; 
	int		res;

	res = test_ftmemcmp(dest, src, 10) && test_ftmemcmp(dest, src, 100)\
		  && test_ftmemcmp(dest, src, 250) && test_ftmemcmp(dest, src, 0)\
		  && test_ftmemcmp(dest, src, strlen(src))\
		  && test_ftmemcmp(dest, src, strlen(dest))\
		  && test_ftmemcmp(dest, src, 500)\
		  && test_ftmemcmp("\200", "\0", 500);
	/* It does segfault when dst, or src is NULL */
	eval_test("ft_memcmp", res);
}
