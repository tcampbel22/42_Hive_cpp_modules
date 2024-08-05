NAME	:= harlfilter 

CC		:= g++
FLAGS	:= -Wextra -Wall -Werror

SRCS	:= main.cpp harl.cpp

CLASSES	:= harl.hpp
		
OBJS	:= ${SRCS:.cpp=.o}

all: $(NAME)

%.o: %.c
	@$(CC) -o $@ -c $< $(FLAGS) && printf "Compiling: $(notdir $<)\n"
			
$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re