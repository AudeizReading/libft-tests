/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrtrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:51:26 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/12 14:22:28 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrtrim(void)
{
	int ret = test_ftstrtrim("*-***-forty*-*two*-*4*-*2", "*-", "forty*-*two*-*4*-*2")\
		&& test_ftstrtrim("forty*-*two*-*4*-*2*-*", "*-", "forty*-*two*-*4*-*2")\
		&& test_ftstrtrim("****----*-*-*****----forty*-*two*-*4*-*2******------*****", "*-", "forty*-*two*-*4*-*2")\
		&& test_ftstrtrim("forty*-*two*-*4*-*2", "", "forty*-*two*-*4*-*2")\
		&& test_ftstrtrim("$$$xxxfortyxxx two", "$x", "fortyxxx two")\
		&& test_ftstrtrim("fortyxxx two   xxx", " x", "fortyxxx two")\
		&& test_ftstrtrim("   xxxfortyxxx two xx    xxx", " x", "fortyxxx two")\
		&& test_ftstrtrim("$$$xxx$$$xxx", "$x", "")\
		&& test_ftstrtrim("", "123", "")\
		&& test_ftstrtrim("123", "", "123")\
		&& test_ftstrtrim("", "", "")\
		&& test_ftstrtrim("$$$\t$$\n\n$\t\t$$\n\n\nHello$\t$$Please\n$Trim$me$!\n$$$\n$\n$\t\t\n$$", "$\n\t", "Hello$\t$$Please\n$Trim$me$!")\
		&& test_ftstrtrim("$$$\t$$\n\n$\t\t$$\n\n\nHello$\t$$Please\n$Trim$me$!", "$\n\t", "Hello$\t$$Please\n$Trim$me$!")\
		&& test_ftstrtrim("Hello$\t$$Please\n$Trim$me$!", "$\n\t", "Hello$\t$$Please\n$Trim$me$!")\
		&& test_ftstrtrim("\t$$$\n\n\n$$\n\n\t$$$$Hello$\t$$Please\n$Trim$me$!\t\t\t\n$$\t\t\t\t$$", "$\n\t", "Hello$\t$$Please\n$Trim$me$!")\
		&& test_ftstrtrim("$$$\t$$\n\n$\t\t$$\n\n\nHello$\t$$Please\n$Trim$me$!\n$$$\n$\n$\t\t\n$$", "$\n\t", "Hello$\t$$Please\n$Trim$me$!")\
		&& test_ftstrtrim(NULL, "$\n\t", NULL)\
		&& test_ftstrtrim(0, "$\n\t", 0)\
		&& test_ftstrtrim("forty-two", 0, "forty-two")\
		&& test_ftstrtrim(NULL, NULL, NULL);
	eval_test("ft_strtrim", ret);
}
