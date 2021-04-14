/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftisalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:52:24 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 09:55:29 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int	test_ftisalpha(int c)
{
	if (!isalpha(c) && ft_isalpha(c) != isalpha(c))
	{
		printf("ft_isalpha: \t%d\n", ft_isalpha(c));
		printf("isalpha: \t%d\n", isalpha(c));
		return (0);
	}
	return (1);
}
