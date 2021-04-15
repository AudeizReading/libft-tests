/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:43:34 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/15 09:47:16 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrrchr(void)
{
	char	*str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
					Maecenas nec ante rhoncus felis ullamcorper tincidunt vel \
					quis velit. Fusce sit amet ante tempus augue convallis \
					pharetra eu at ligula. Phasellus bibendum quam placerat, \
					vulputate est vel quam.";
	int		res;

	res = test_ftstrrchr(str, ' ') && test_ftstrrchr(str, '.')\
		  && test_ftstrrchr(str, 'Z') && test_ftstrrchr(str, 0)\
		  && test_ftstrrchr(str, '\n') && test_ftstrrchr(str, 250);
	eval_test("ft_strrchr", res);
}
