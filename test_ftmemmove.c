/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftmemmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:24:50 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/16 19:23:57 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftmemmove(void *dest, void *dest_ft, void *src, size_t n)
{
	char	*mem = memmove(dest, src, n);
	char	*ft_mem = ft_memmove(dest_ft, src, n);

	if ((mem == NULL && ft_mem == NULL) || !memcmp(mem, ft_mem, n))
		return (1);
	return (0);
}
