/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftisalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:05:53 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 10:06:27 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int	test_ftisalnum(int c)
{
	if (!isalnum(c) && ft_isalnum(c) != isalnum(c))
	{
		printf("ft_isalnum: \t%d\n", ft_isalnum(c));
		printf("isalnum: \t%d\n", isalnum(c));
		return (0);
	}
	return (1);
}
