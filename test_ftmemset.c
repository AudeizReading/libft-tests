/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftmemset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:11:04 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 18:22:17 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftmemset(void *b1, void *b2, int c, size_t len)
{

	if (!strcmp(memset(b1, c, len), ft_memset(b2, c, len)))
		return (1);
	return (0);
}
