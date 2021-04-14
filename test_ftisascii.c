/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftisascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:09:29 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 10:10:01 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int	test_ftisascii(int c)
{
	if (!isascii(c) && ft_isascii(c) != isascii(c))
	{
		printf("ft_isascii: \t%d\n", ft_isascii(c));
		printf("isascii: \t%d\n", isascii(c));
		return (0);
	}
	return (1);
}
