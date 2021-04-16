/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftmemccpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:32:39 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/16 20:11:05 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftmemccpy(void *dest, void *src, int c, size_t n)
{
	char	dest_cpy[250];
	bzero(dest_cpy, 250);
	printf("dest:\t%s\nsize:%ld\n", (char *)dest, strlen(dest));
	char	*mem = memccpy(dest, src, c, n);
	char	*ft_mem = ft_memccpy(dest_cpy, src, c, n);
/*	Uncomment for debugging */
	printf("dest:\t%s\nsize:%ld\n", (char *)dest, strlen(dest));
	printf("dest_cpy:\t%s\nsize:%ld\n", dest_cpy, strlen(dest_cpy));
	if (mem) printf("mem\t%p\nsize:%ld\n", mem, strlen(mem));
	if (ft_mem) printf("ft_mem\t%p\nsize:%ld\n", ft_mem, strlen(ft_mem));

	if ((mem == NULL && ft_mem == NULL) || !memcmp(dest, dest_cpy, n))
		return (1);
	return (0);
}
