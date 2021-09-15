# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sameye <sameye@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/03 14:02:57 by sameye            #+#    #+#              #
#    Updated: 2021/09/15 19:02:04 by sameye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
INC = push_swap.h

SRCS += push_swap.c
SRCS += push.c
SRCS += swap.c
SRCS += rotate.c
SRCS += reverserotate.c
SRCS += push_swap_utils.c
SRCS += normalize.c
SRCS += radixsort.c
SRCS += swapsort.c

OBJS_DIR = obj/
OBJS = $(addprefix $(OBJS_DIR),$(SRCS:.c=.o))

CC = gcc -Wall -Wextra -Werror

LFT_DIR = ./libft/
LFT_LIB = $(LFT_DIR)libft.a
LFT_LNK = -L $(LFT_DIR) -l ft

all: $(NAME)

$(NAME) : $(OBJS) $(LFT_LIB)
	$(CC) $(OBJS) $(LFT_LNK) -lm -o $(NAME)

$(OBJS): $(OBJS_DIR)%.o: %.c $(OBJS_DIR)
	$(CC) -I $(LFT_DIR) -c $< -o $@

$(OBJS_DIR):
	mkdir $@

$(LFT_LIB):
	$(MAKE) -C $(LFT_DIR)

bonus : all

clean:
	rm -rf $(OBJS)
	$(MAKE) clean -C $(LFT_DIR)

fclean: clean
	rm -rf $(NAME)
	$(MAKE) fclean -C $(LFT_DIR)

re: fclean all

.PHONY: all clean fclean re
