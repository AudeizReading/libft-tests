/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:57:14 by alellouc          #+#    #+#             */
/*   Updated: 2021/04/14 15:10:06 by alellouc         ###   ########.fr       */
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
		if (ft_strlen("Alleluiah!") != strlen("Alleluiah!"))
		{
			printf("FAILED: ft_strlen\n");
			printf("ft_strlen: \t%ld\n", ft_strlen("Alleluiah!"));
			printf("strlen: \t%ld\n", strlen("Alleluiah!"));
		}
		else if (ft_strlen("\0") != strlen("\0"))
		{
			printf("FAILED: ft_strlen\n");
			printf("ft_strlen: \t%ld\n", ft_strlen("0"));
			printf("strlen: \t%ld\n", strlen("0"));
		}
		else if (ft_strlen("abcdefghijklmnopqrstuvwxyz") !=	strlen("abcdefghijklmnopqrstuvwxyz"))
		{
			printf("FAILED: ft_strlen\n");
			printf("ft_strlen: \t%ld\n", ft_strlen("abcdefghijklmnopqrstuvwxyz"));
			printf("strlen: \t%ld\n", strlen("abcdefghijklmnopqrstuvwxyz"));
		}
		else
		{
			printf("SUCCESS: ft_strlen\n");
		}
	}
	/* ft_strncmp Be careful this var is still used by memcmp test*/
	eval_ftstrncmp();
	char *s_ncmp1 = "the cake is a lie !\0I'm hidden lol\r\n";
	char *s_ncmp2 = "there is no stars in the sky";
	size_t size_ncmp1 = strlen("the cake is a lie !\0I'm hidden lol\r\n");
	char *s_ncmp3 = "omg1||||||||||||||||";
	char *s_ncmp4 = "omg3";
	size_t size_ncmp2 = 4;
	char *s_ncmp5 = "";
	char *s_ncmp6 = "AAAAAA";
	size_t size_ncmp3 = 6;
	char *s_ncmp7 = "omg1";
	char *s_ncmp8 = "omg3                ";
	size_t size_ncmp4 = 100000;

	/* ft_atoi */
	eval_ftatoi();

	/* ft_strdup */
	char	*dest_ftstrdup;
	char	*dest_strdup;
	dest_ftstrdup = ft_strdup("World");
	dest_strdup = strdup("World");
	if (strcmp(dest_ftstrdup, dest_strdup) != 0)
	{
		printf("FAILED: ft_strdup\n");
		printf("ft_strdup: \t%s\n", dest_ftstrdup);
		printf("strdup: \t%s\n", dest_strdup);
	}
	else
	{
		printf("SUCCESS: ft_strdup\n");
	}
	free (dest_ftstrdup);
	free (dest_strdup);

	/* ft_calloc */
	char	*dest_ftcalloc;
	char	*dest_calloc;
	if ((dest_ftcalloc = ft_calloc(sizeof(char), 0)))
		printf("ft_calloc:\t%s\n", dest_ftcalloc);
	if ((dest_calloc = calloc(sizeof(char), 0)))
		printf("calloc:\t%s\n", dest_calloc);
	free(dest_ftcalloc);
	free(dest_calloc);

	/* ft_memset */
	char	dest_ftmemset[250] = "Oyé sapapya, ca vous dirait un icecream avec mon ami et moi ?";
	char	dest_memset[250] = "Oyé sapapya, ca vous dirait un icecream avec mon ami et moi ?";
	ft_memset(dest_ftmemset, '$', 5);
	memset(dest_memset, '$', 5);
	if (strcmp(dest_ftmemset, dest_memset) != 0)
	{
		printf("FAILED: ft_memset\n");
		printf("ft_memset: \t%s\n", dest_ftmemset);
		printf("memset: \t%s\n", dest_memset);
	}
	else
	{
		printf("SUCCESS: ft_memset\n");
	}

	/* ft_bzero */
	ft_bzero(dest_ftmemset, 10);
	bzero(dest_memset, 10);
	if (strcmp(dest_ftmemset, dest_memset) != 0)
	{
		printf("FAILED: ft_bzero\n");
		printf("ft_bzero: \t%s\n", dest_ftmemset);
		printf("bzero: \t%s\n", dest_memset);
	}
	else
	{
		printf("SUCCESS: ft_bzero\n");
	}

	/* ft_memcpy */
	char	dest_ftmemcpy[250];
	char	dest_memcpy[250];
	char	*src_memcpy = "Hello World\0";
	ft_memcpy(dest_ftmemcpy, src_memcpy, strlen(src_memcpy) - 3);
	memcpy(dest_memcpy, src_memcpy, strlen(src_memcpy) - 3);
	if (strcmp(dest_ftmemcpy, dest_memcpy) != 0)
	{
		printf("FAILED: ft_memcpy\n");
		printf("\tft_memcpy: \t%s\n", dest_ftmemcpy);
		printf("\tmemcpy: \t%s\n", dest_memcpy);
		printf("\tstrcmp des 2: \t%d\n", strcmp(dest_ftmemcpy, dest_memcpy));
		printf("\tstrlen ft_memcpy: \t%ld\n", strlen(dest_ftmemcpy));
		printf("\tstrlen memcpy: \t%ld\n", strlen(dest_memcpy));
		printf("Pay attention: encountering some issues when testing results of	memcpy. I don't understand why memcpy fills outter that we ask to. Make `./aout lalali | cat -e` for seeing what's happened in your dest buffer\n");
	}
	else
	{
		printf("FAILED: ft_memcpy\n");
	}
	/*printf("ft_memcpy:\t\%s\n", ft_memcpy((void *)0, (void *)0, 17));*/
/*	printf("memcpy:\t\%s\n", memcpy((void *)0, (void *)0, 17));*/
	/*printf("ft_memcpy:\t\%s\n", ft_memcpy((void *)0, "segfaulter tu dois", 17));*/
	/*printf("memcpy:\t\%s\n", memcpy((void *)0, "segfaulter tu dois", 17));*/
	/* ft_memchr */
	/* ft_memcmp */
	char	s1[] = "Salua";
	char	s2[] = "Saluz";
	printf("ft_memcmp, s1 et s2:\t%d\n", ft_memcmp(s1, s2, strlen(s1)));
	printf("memcmp, s1 et s2:\t%d\n", memcmp(s1, s2, strlen(s1)));
	printf("ft_memcmp, s2 et s1:\t%d\n", ft_memcmp(s2, s1, strlen(s2)));
	printf("memcmp, s2 et s1:\t%d\n", memcmp(s2, s1, strlen(s2)));
	printf("ft_memcmp, s1 et s1:\t%d\n", ft_memcmp(s1, s1, strlen(s1)));
	printf("memcmp, s1 et s1:\t%d\n", memcmp(s1, s1, strlen(s1)));
	printf("ft_memcmp, s_ncmp1 et s_ncmp2:\t%d\n", ft_memcmp(s_ncmp1, s_ncmp2, size_ncmp1));
	printf("memcmp, s_ncmp1 et s_ncmp2:\t%d\n", memcmp(s_ncmp1, s_ncmp2, size_ncmp1));
	printf("ft_memcmp, s_ncmp3 et s_ncmp4:\t%d\n", ft_memcmp(s_ncmp3, s_ncmp4, size_ncmp2));
	printf("memcmp, s_ncmp3 et s_ncmp4:\t%d\n", memcmp(s_ncmp3, s_ncmp4, size_ncmp2));
	printf("ft_memcmp, s_ncmp5 et s_ncmp6:\t%d\n", ft_memcmp(s_ncmp5, s_ncmp6, size_ncmp3));
	printf("memcmp, s_ncmp5 et s_ncmp6:\t%d\n", memcmp(s_ncmp5, s_ncmp6, size_ncmp3));
	printf("ft_memcmp, s_ncmp7 et s_ncmp8:\t%d\n", ft_memcmp(s_ncmp7, s_ncmp8, size_ncmp4));
	printf("memcmp, s_ncmp7 et s_ncmp8:\t%d\n", memcmp(s_ncmp7, s_ncmp8, size_ncmp4));
	printf("ft_memcmp, \\200 et \\0:\t%d\n", ft_memcmp("\200", "\0", 1));
	printf("memcmp, \\200 et \\0:\t%d\n", memcmp("\200", "\0", 1));

	/* ft_strrchr */
	char	s_rchr1[] = "Hello";
	printf("ft_strrchr:\t%s\tstrrchr:\t%s\n", ft_strrchr(s_rchr1, 'l'), strrchr(s_rchr1, 'l'));
	printf("ft_strrchr:\t%s\tstrrchr:\t%s\n", ft_strrchr(s_rchr1, '\0'), strrchr(s_rchr1, '\0'));
	 
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
	printf("ft_substr: %s\n", ft_substr("forty-two", 5, 0));
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
