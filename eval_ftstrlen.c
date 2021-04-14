/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:31:40 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 15:40:47 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrlen(void)
{
	int res;

	res = test_ftstrlen("Alleluiah") && test_ftstrlen("Alleluiah\0Amen Omen")\
		  && test_ftstrlen("\0")\
		  && test_ftstrlen("abcdefghijklmnopqrstuvwwxyz");
	eval_test("ft_strlen", res);
}
