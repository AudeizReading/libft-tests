/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftisalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:06:51 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 10:07:09 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftisalnum(void)
{
	int ret = test_ftisalnum('A') && test_ftisalnum('0') && test_ftisalnum(0)\
			  && test_ftisalnum('\n');
	eval_test("ft_isalnum", ret);
}
