/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:42:11 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/15 09:47:03 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftstrrchr(char *s, int c)
{
	char	*str = strrchr(s, c);
	char	*ft_str = ft_strrchr(s, c);

	if ((str == NULL && ft_str == NULL) || !strcmp(str, ft_str))
		return (1);
	return (0);
}
