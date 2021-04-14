/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftbzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:36:51 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 18:44:13 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftbzero(void *b1, void *b2, size_t len)
{
	bzero(b1, len);
	ft_bzero(b2, len);
	if (!strcmp((char *)b1, (char *)b2))
		return (1);
	return (0);
}
