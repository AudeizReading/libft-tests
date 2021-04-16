/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftmemcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:04:37 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/16 19:29:55 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftmemcpy(void *dest, void *src, size_t n)
{
	char	dest_cpy[250];
	char	*mem = memcpy(dest, src, n);
	char	*ft_mem = ft_memcpy(dest_cpy, src, n);
/*	Uncomment for debugging
**	printf("dest:\t%s\tsize:%ld\n", (char *)dest, strlen(dest));
	printf("dest_cpy:\t%s\tsize:%ld\n", dest_cpy, strlen(dest_cpy));*/

	if ((mem == NULL && ft_mem == NULL) || !memcmp(mem, ft_mem, n))
		return (1);
	return (0);
}
