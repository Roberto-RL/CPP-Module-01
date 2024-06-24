# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 18:59:28 by rrimonte          #+#    #+#              #
#    Updated: 2024/06/24 18:59:29 by rrimonte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		=	ex01
SRC			=	zombieHorde.cpp \
				zombie.cpp \
				main.cpp
OBJS		=	$(SRC:.cpp=.o)
COMPILE		=	c++
# -std=c++98 displays an error if an unauthorized function is left in the code
FLAGS		=	-Wall -Wextra -Werror -std=c++98
EXE_NAME	=	-o ex01
EXEC		=	ex01

# ------------------------------------- RULES ---------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}