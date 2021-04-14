/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrnstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:09:56 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 14:10:09 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftstrnstr(char *haystack, char *needle, size_t len, char *expected)
{
	if (haystack == NULL && expected == NULL)
		return (1);
	char *res = ft_strnstr(haystack, needle, len);
	if ((res == NULL && expected == NULL) || !strcmp(res, expected))
		return (1);
/*	Un comment for debug*/
	/*else if (expected != NULL)
		printf("expected: %s\tyour strnstr: %s\n", expected, res);
	else
		printf("expected: NULL\tyour strnstr: %s\n", res);*/
	return (0);
}
