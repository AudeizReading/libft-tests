/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftmemcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:13:35 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/15 14:05:56 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftmemcmp(void *dest, void *src, size_t n)
{
	int	mem = memcmp(dest, src, n);
	int	ft_mem = ft_memcmp(dest, src, n);

	if (mem == ft_mem)
		return (1);
	return (0);
}
