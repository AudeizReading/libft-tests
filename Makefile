# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alellouc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/03 20:33:29 by alellouc          #+#    #+#              #
#    Updated: 2021/04/22 19:56:11 by alellouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=-gcc
AR=-ar crs
RM=-rm -rf
MAKE=-make
LIBFT=libft
FT=ft
LIBFT_PATH=../$(LIBFT)
CFLAGS=-Wall -Wextra -Werror
LDFLAGS=-L $(LIBFT_PATH) -l$(FT)
CHEADERS=-I .
ALL_FLAGS=$(CHEADERS) $(CFLAGS)
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
NAME=test-libft

.PHONY: clean fclean re all lib test

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) lib
	@$(CC) $^ $(LDFLAGS) -o $@; chmod +x $@

debug: $(OBJ)
	@$(MAKE) lib
	@$(CC) $^ $(LDFLAGS) -fsanitize=address -fno-omit-frame-pointer -g -o $@; chmod +x $@

lib:
	@$(MAKE) -C $(LIBFT_PATH) all

test: all
	@$(MAKE) clean
	@./$(NAME) 

%.o:%.c
	@$(CC) -c $< $(ALL_FLAGS) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	
