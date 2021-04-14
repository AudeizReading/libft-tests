/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:50:23 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 17:17:17 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftstrdup(char *s1)
{
	int		ret = 0;
	char	*dest = strdup(s1);
	char	*dest_ft = ft_strdup(s1);
	if (!strcmp(dest, dest_ft))
		ret = 1;
	free(dest);
	free(dest_ft);
	return (ret);
}
