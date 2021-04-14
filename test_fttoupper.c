/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fttoupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:41:22 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 11:42:02 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int	test_fttoupper(int c)
{
	if (!toupper(c) && ft_toupper(c) != toupper(c))
	{
		printf("ft_toupper: \t%d\n", ft_toupper(c));
		printf("toupper: \t%d\n", toupper(c));
		return (0);
	}
	return (1);
}
