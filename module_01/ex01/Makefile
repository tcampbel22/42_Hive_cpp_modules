NAME	:= zombie_horde 

CC		:= g++
FLAGS	:= -Wextra -Wall -Werror

SRCS	:= main.cpp Zombie.cpp zombieHorde.cpp

CLASSES := Zombie.hpp
		
OBJS	:= ${SRCS:.cpp=.o}

all: $(NAME)

%.o: %.c
	@$(CC) -o $@ -c $< $(FLAGS) $(CLASSES) && printf "Compiling: $(notdir $<)\n"
			
$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) $(CLASSES) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re