/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:19:02 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/15 09:38:33 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		test_ftstrchr(char *s, int c)
{
	char	*str = strchr(s, c);
	char	*ft_str = ft_strchr(s, c);

	if ((str == NULL && ft_str == NULL) || !strcmp(str, ft_str))
		return (1);
	return (0);
}
