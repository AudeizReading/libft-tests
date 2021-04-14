/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftmemset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:23:03 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 18:29:44 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftmemset(void)
{
	int	res;
	char	dest_ftmemset[250] = "Oyé sapapya, ca vous dirait un icecream avec mon ami et moi ?";
	char	dest_memset[250] = "Oyé sapapya, ca vous dirait un icecream avec mon ami et moi ?";
	
	res = test_ftmemset(dest_memset, dest_ftmemset, '$', 100)\
		  && test_ftmemset(dest_memset, dest_ftmemset, '!', 25)\
		  && test_ftmemset(dest_memset, dest_ftmemset, 0, 250);
	eval_test("ft_memset", res);
}
