/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftisprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:13:49 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 10:14:15 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int	test_ftisprint(int c)
{
	if (!isprint(c) && ft_isprint(c) != isprint(c))
	{
		printf("ft_isprint: \t%d\n", ft_isprint(c));
		printf("isprint: \t%d\n", isprint(c));
		return (0);
	}
	return (1);
}
