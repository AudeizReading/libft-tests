/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:03:02 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/10 19:27:28 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

void	test_ftsplit(char *str, int sep)
{
	printf("Number found words: %d\n", ft_cntwds(str, (char)sep));
	char	**tab = ft_split(str, sep);
	int i = 0;
	while (tab[i])
	{
		printf("\ttab[%d]: %s, length: %ld\n", i, tab[i], strlen(tab[i]));
		i++;
	}
	if (tab[i] == NULL)
		printf("\ttab[%d] is NULL\n", i);
	while (i >= 0)
		free(tab[i--]);
	free(tab);
}
