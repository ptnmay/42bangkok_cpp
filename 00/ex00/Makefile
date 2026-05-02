# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <psaeyang@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/02 17:05:40 by psaeyang          #+#    #+#              #
#    Updated: 2026/05/02 17:53:46 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BRED =\033[1;31m
BCYN =\033[1;36m
BYEL =\033[1;33m
RES = \033[0m

COMPILE = echo "$(BCYN)$(NAME) compiled....$(RES)"
CLEAN = echo "$(BYEL)$(NAME) clean....$(RES)"
FCLEAN = echo "$(BRED)$(NAME) fclean....$(RES)"

NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@$(COMPILE)

clean:
	rm -f ${OBJ}
	@$(CLEAN)

fclean: clean
	rm -f ${NAME}
	@$(FCLEAN)

re: fclean all

.PHONY: all clean fclean re
