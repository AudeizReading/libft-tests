/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftisalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 09:56:35 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 09:59:05 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftisalpha(void)
{
	int ret = test_ftisalpha('A') && test_ftisalpha('0') && test_ftisalpha(0)\
			  && test_ftisalpha('\n');
	eval_test("ft_isalpha", ret);
}
