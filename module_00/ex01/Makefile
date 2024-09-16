NAME	:= phonebook 

CC		:= c++
FLAGS	:= -Wall -Wextra -Werror

SRCS	:= main.cpp PhoneBook.cpp Contact.cpp
		
OBJS	:= ${SRCS:.cpp=.o}

all: $(NAME)

%.o: %.cpp
	@$(CC) -o $@ -c $< $(FLAGS) && printf "Compiling: $(notdir $<)\n"
			
$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re