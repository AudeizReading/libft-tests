/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftbzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:38:07 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 18:38:55 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftbzero(void)
{
	int	res;
	char	dest_ftbzero[250] = "Oyé sapapya, ca vous dirait un icecream avec mon ami et moi ?";
	char	dest_bzero[250] = "Oyé sapapya, ca vous dirait un icecream avec mon ami et moi ?";
	
	res = test_ftbzero(dest_bzero, dest_ftbzero, 100)\
		  && test_ftbzero(dest_bzero, dest_ftbzero, 25)\
		  && test_ftbzero(dest_bzero, dest_ftbzero, 250);
	eval_test("ft_bzero", res);
}
