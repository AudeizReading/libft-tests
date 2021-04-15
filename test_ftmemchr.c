/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftmemchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 10:01:46 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/15 10:04:01 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftmemchr(void *b, int c, size_t n)
{
	char	*mem = memchr(b, c, n);
	char	*ft_mem = ft_memchr(b, c, n);

	if ((mem == NULL && ft_mem == NULL) || !strncmp(mem, ft_mem, n))
		return (1);
	return (0);
}
