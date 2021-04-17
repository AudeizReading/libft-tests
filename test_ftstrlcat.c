/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:57:35 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/17 20:56:46 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftstrlcat(char *dst, char *src, size_t size, char *expected)
{
	size_t	res;
	size_t	res_expected;
	size_t dst_len = strlen(dst);
	size_t src_len = strlen(src);

	memcpy(dst, "Mouli", 250);
	res = ft_strlcat(dst, src, size);
	res_expected = (strlen(dst) >= size) ? size + src_len : src_len + dst_len;
	if (res == res_expected && !strcmp(dst, expected))
		return (1);
	return (0);
}
