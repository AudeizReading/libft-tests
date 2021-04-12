/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:22:10 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/12 10:29:46 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftsplit(void)
{
	int ret;

	ret = test_ftsplit("$$$$$$hello$$$$how$do$$$$$you$$$$do$$$$$in$$$$$forty$$$$$$$two",'$')\
		&& test_ftsplit("forty-two\0I'm hidden", '-')\
		&& test_ftsplit("forty-two\0I'm hidden", ' ')\
		&& test_ftsplit("forty-two", 0)\
		&& test_ftsplit("         ", ' ')\
		&& test_ftsplit(0, 0)\
		&& test_ftsplit("forty-two", ' ')\
		&& test_ftsplit("", 0)\
		&& test_ftsplit("_FORTY_TWO_", '_')\
		&& test_ftsplit("_F_O_R_T_Y_T_W_O_", '_')\
		&& test_ftsplit("_FOR_TYTWO_", '_')\
		&& test_ftsplit("_FORTY-TWO", '_')\
		&& test_ftsplit("FORTY-TWO_", '_');
	eval_test("ft_split", ret);
}
