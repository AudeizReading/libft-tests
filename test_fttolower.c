/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fttolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:12:55 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 11:13:26 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int	test_fttolower(int c)
{
	if (!tolower(c) && ft_tolower(c) != tolower(c))
	{
		printf("ft_tolower: \t%d\n", ft_tolower(c));
		printf("tolower: \t%d\n", tolower(c));
		return (0);
	}
	return (1);
}
