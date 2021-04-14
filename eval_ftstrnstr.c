/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_ftstrnstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:15:10 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 14:12:54 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	eval_ftstrnstr(void)
{
	char	*haystack1 = "see FF your FF return FF now FF";
	char	*needle1 = "FF";
	char	*expected1 = "FF your FF return FF now FF";
	char	*haystack2 = "MZIRIBMZIRIBMZE123";
	char	*needle2 = "MZIRIBMZE";
	char	*haystack3 = "abcdef";
	char	*needle3 = "abcdefghijklmnop";
	char	*haystack4 = "123456789";
	char	*needle4 = "9";
	char	*haystack5 = "";
	char	*needle5 = "Beautiful empty string";
	char	*haystack6 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	char	*haystack7 = "A";
	char	*haystack8 = NULL;
	char	*needle8 = "fake";
	char	*haystack9 = "aaabcabcd";
	char	*needle9 = "abcd";
	int	res;

	res = test_ftstrnstr(haystack1, needle1, strlen(haystack1), expected1)\
		  && test_ftstrnstr(needle1, haystack1, strlen(haystack1), NULL)\
		  && test_ftstrnstr(haystack2, needle2, strlen(needle2), NULL)\
		  && test_ftstrnstr(haystack3, needle3, strlen(haystack3), NULL)\
		  && test_ftstrnstr(haystack4, needle4, 8, NULL)\
		  && test_ftstrnstr(needle1, haystack1, 4, NULL)\
		  && test_ftstrnstr(haystack5, needle5, strlen(needle5), NULL)\
		  && test_ftstrnstr(haystack6, haystack6, strlen(haystack6), haystack6)\
		  && test_ftstrnstr(haystack7, haystack7, strlen(haystack7), haystack7)\
		  && test_ftstrnstr(haystack8, needle8, 3, NULL)\
		  && test_ftstrnstr(haystack9, needle9, strlen(haystack9), needle9);

	eval_test("ft_strnstr", res);
}
