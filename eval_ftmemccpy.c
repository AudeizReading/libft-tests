/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftmemccpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:35:58 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 13:21:55 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftmemccpy(void)
{
	int res;
	char	*src = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas nec ante rhoncus felis ullamcorper tincidunt vel quis velit. Fusce sit amet ante tempus augue convallis pharetra eu at ligula. Phasellus bibendum quam placerat, vulputate est vel quam.";
	char	dest[251];

	res = test_ftmemccpy(dest, src, ',', strlen(src))\
		  && test_ftmemccpy(dest, src, 'u', strlen(src))\
		  && test_ftmemccpy(dest, src, 'Z', strlen(src))\
		  && test_ftmemccpy(dest, src, 'Z', 0)\
		  && test_ftmemccpy(dest, dest + 25, 'q', strlen(dest))\
		  && test_ftmemccpy(dest, src + 25, 'q', strlen(src))\
		  && test_ftmemccpy(dest, src, '\200', strlen(src));
	/* It does segfault if a NULL pointer is given for dest or src */
	/*printf("dest (eval):\t%s\n", dest);*/
	eval_test("ft_memccpy", res);
}
