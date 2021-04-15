/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:22:04 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/15 09:41:21 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrchr(void)
{
	char	*str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
					Maecenas nec ante rhoncus felis ullamcorper tincidunt vel \
					quis velit. Fusce sit amet ante tempus augue convallis \
					pharetra eu at ligula. Phasellus bibendum quam placerat, \
					vulputate est vel quam.";
	int		res;

	res = test_ftstrchr(str, ' ') && test_ftstrchr(str, '.')\
		  && test_ftstrchr(str, 'Z') && test_ftstrchr(str, 0)\
		  && test_ftstrchr(str, '\n') && test_ftstrchr(str, 250);
	eval_test("ft_strchr", res);
}
