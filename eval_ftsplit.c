/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:22:10 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/19 11:23:15 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftsplit(void)
{
	int ret;

	ret = test_ftsplit("$$$$$$hello$$$$how$do$$$$$you$$$$do$$$$$in$$$$$forty$$$$$$$two",'$')\
		&& test_ftsplit("       tripouille   42   ", ' ')\
		&& test_ftsplit("chinimala", ' ')\
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
		&& test_ftsplit("FORTY-TWO_", '_')\
		&& test_ftsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	eval_test("ft_split", ret);
}
