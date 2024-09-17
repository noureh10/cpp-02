# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 12:47:24 by nechaara          #+#    #+#              #
#    Updated: 2024/09/03 15:48:59 by nechaara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRCS = main.cpp Fixed.cpp
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))
OBJ_DIR = objects
FLAGS = -std=c++98 -Wall -Wextra -Werror
all : $(NAME)

$(NAME) : $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) created successfully !"
	@echo "use it this way : $(NAME)"
	

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Cleaned object files." 
fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned executable."

re: fclean all

.PHONY: all clean fclean re