/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:58:29 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 15:00:49 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftstrncmp(char *s1, char *s2, size_t len)
{
	if(ft_strncmp(s1, s2, len) == strncmp(s1, s2, len))
		return (1);
	return (0);
}
