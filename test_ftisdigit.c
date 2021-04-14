/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftisdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:01:14 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 10:01:50 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int	test_ftisdigit(int c)
{
	if (!isdigit(c) && ft_isdigit(c) != isdigit(c))
	{
		printf("ft_isdigit: \t%d\n", ft_isdigit(c));
		printf("isdigit: \t%d\n", isdigit(c));
		return (0);
	}
	return (1);
}
