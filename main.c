/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:57:14 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/16 19:35:40 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-libft.h"

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		/* ft_pustr_fd, ft_putchar_fd, ft_putendl_fd, ft_putnbr_fd */
		printf("Tests sur ft_putchar/putstr/putendl/putnbr_fd:\n");
		++argv;
		printf("ft_putstr: *argv\tft_putchar: \\n\n");
		ft_putstr_fd(*argv, 1);
		ft_putchar_fd('\n', 1);
		printf("ft_putendl: *argv\n");
		ft_putendl_fd(*argv, 1);
		printf("ft_putnbr: argc\n");
		ft_putnbr_fd(argc, 1);
		printf("\nft_putnbr: INT_MIN\n");
		ft_putnbr_fd(INT_MIN, 1);
		printf("\nft_putnbr: INT_MAX\n");
		ft_putnbr_fd(INT_MAX, 1);
		printf("\nft_putchar: **argv\n");

		/* ft_isalpha, ft_putchar_fd */
		if (!isalpha(**argv) && ft_isalpha(**argv) == isalpha(**argv))
		{
			while (ft_isalpha(**argv))
			{
				ft_putchar_fd(**argv, 1);
				(*argv)++;
			}
		}	
		printf("\nft_putchar: ascii -125\n");
		ft_putchar_fd(-125, 1);
		ft_putchar_fd('\n', 1);

		/* ft_isalpha */
		eval_ftisalpha();
		/* ft_tolower */
		eval_fttolower();
		/* ft_toupper */
		eval_fttoupper();
		/* ft_isdigit */
		eval_ftisdigit();
		/* ft_isalnum */
		eval_ftisalnum();
		/* ft_isascii */
		eval_ftisascii();
		/* ft_isprint */
		eval_ftisprint();
		/* ft_strlen */
		eval_ftstrlen();
	}
	eval_ftstrncmp();
	/* ft_atoi */
	eval_ftatoi();
	/* ft_strdup */
	eval_ftstrdup();
	/* ft_calloc */
	eval_ftcalloc();
	/* ft_memset */
	eval_ftmemset();
	/* ft_bzero */
	eval_ftbzero();
	/* ft_memcpy */
	eval_ftmemcpy();
	/* ft_memccpy */
	eval_ftmemccpy();
	/* ft_memcmp */
	eval_ftmemcmp();
	/* ft_memchr */
	eval_ftmemchr();
	/* ft_memove */
	eval_ftmemmove();
	/* ft_strchr */
	eval_ftstrchr();
	/* ft_strrchr */
	eval_ftstrrchr();
	/* ft_strnstr */
	eval_ftstrnstr();

	/* ft_itoa */
	printf("ft_itoa: %s\n", ft_itoa(25));
	printf("ft_itoa: %s\n", ft_itoa(-542));
	printf("ft_itoa: %s\n", ft_itoa(-42));
	printf("ft_itoa: %s\n", ft_itoa(42));
	printf("ft_itoa: %s\n", ft_itoa(0));
	printf("ft_itoa: %s\n", ft_itoa(-2147483647));
/*	printf("ft_itoa: %s\n", ft_itoa(2147483648));*/
	printf("ft_itoa: %s\n", ft_itoa(INT_MIN));
	printf("ft_itoa: %s\n", ft_itoa(INT_MAX));

	/* ft_substr */
	printf("ft_substr: %s\n", ft_substr("tripouille", 0, 42000));
	printf("ft_substr: %s\n", ft_substr("forty-two", 0, 0));
	printf("ft_substr: %s\n", ft_substr("forty-two", 5, 7));
	printf("ft_substr: %s\n", ft_substr("forty-two", -1, 20));
	printf("ft_substr: %s\n", ft_substr(NULL, 0, 20));
	printf("ft_substr: %s\n", ft_substr("tripouille", 1, 1));
	printf("ft_substr: %s\n", ft_substr("tripouille", 100, 1));
	printf("ft_substr: %s\n", ft_substr("1", 42, 42000000));

	/* ft_strtrim */
	eval_ftstrtrim();
	/* ft_split */
	eval_ftsplit();
	return (0);
}
