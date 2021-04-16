/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftmemccpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:35:58 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/16 20:10:23 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftmemccpy(void)
{
	int res;
	char	*src = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas nec ante rhoncus felis ullamcorper tincidunt vel quis velit. Fusce sit amet ante tempus augue convallis pharetra eu at ligula. Phasellus bibendum quam placerat, vulputate est vel quam.";
	char	dest[250];

	bzero(dest, 250);
	res = test_ftmemccpy(dest, src, ',', strlen(src));
	printf("dest (eval):\t%s\n", dest);
	eval_test("ft_memccpy", res);
}
