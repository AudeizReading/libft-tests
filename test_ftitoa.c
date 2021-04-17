/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftitoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 13:44:48 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 14:08:51 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftitoa(int n, char *expected)
{
	char	*itoa = ft_itoa(n);

	if (!strcmp(expected, itoa))
		return (1);
	return (0);
}
