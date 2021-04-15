/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftmemchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 10:04:18 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/15 10:05:57 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftmemchr(void)
{
	char	*str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
					Maecenas nec ante rhoncus felis ullamcorper tincidunt vel \
					quis velit. Fusce sit amet ante tempus augue convallis \
					pharetra eu at ligula. Phasellus bibendum quam placerat, \
					vulputate est vel quam.";
	int		res;

	res = test_ftmemchr(str, ' ', 10) && test_ftmemchr(str, '.', 50)\
		  && test_ftmemchr(str, 'Z', 250) && test_ftmemchr(str, 0, 0)\
		  && test_ftmemchr(str, '\n', 15) && test_ftmemchr(str, 250, 500);
	eval_test("ft_memchr", res);
}
