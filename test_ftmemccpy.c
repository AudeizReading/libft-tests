/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftmemccpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:32:39 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 13:32:37 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftmemccpy(void *dest, void *src, int c, size_t n)
{
	char	dest_cpy[251];
	bzero(dest, 251);
	bzero(dest_cpy, 251);
	char	*mem = memccpy(dest, src, c, n);
	char	*ft_mem = ft_memccpy(dest_cpy, src, c, n);

	if ((mem == NULL && ft_mem == NULL) || (!memcmp(dest, dest_cpy, n)\
			&& (mem == (dest + strlen(dest))\
				&& ft_mem == (dest_cpy + strlen(dest_cpy)))))
		return (1);
	return (0);
}
