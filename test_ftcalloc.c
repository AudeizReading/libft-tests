/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftcalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:48:25 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 17:54:51 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftcalloc(size_t size_of, size_t len)
{
	int		ret = 0;
	char	*dest = calloc(size_of, len);
	char	*dest_ft = ft_calloc(size_of, len);
	if (!strcmp(dest, dest_ft))
		ret = 1;
	free(dest);
	free(dest_ft);
	return (ret);
}
