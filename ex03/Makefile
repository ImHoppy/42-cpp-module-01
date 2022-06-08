NAME		=	violence

CC			=	c++

CFLAGS		=	-Werror -Wall -Wextra -g3 -std=c++98 -I.

SRCS		=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
HEADER		=	HumanA.hpp HumanB.hpp Weapon.hpp

OBJS		=	$(SRCS:.cpp=.o)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
.PHONY: all clean fclean