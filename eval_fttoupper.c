/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_fttoupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:42:18 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 11:42:39 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_fttoupper(void)
{
	int ret = test_fttoupper('A') && test_fttoupper('0') && test_fttoupper(0)\
			  && test_fttoupper('a') && test_fttoupper('\n') && test_fttoupper(128);
	eval_test("ft_toupper", ret);
}
