CC = c++
CFAGS = -Wall -Wextra -Werror
NAME = zombie
OBJS_DIR = objs
SRCS_DIR = srcs
FILES := $(shell ls $(SRCS_DIR))

OBJS = $(addprefix $(OBJS_DIR)/, $(FILES:.cpp=.o))

all: create_dirs $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
		$(CC) -I./includes/ $(CFAGS) -c $< -o $@

$(NAME):  $(OBJS)
		$(CC) $(CFAGS) $(OBJS) -o $(NAME)

create_dirs:
		@ mkdir -p $(OBJS_DIR)
	
clean:
		rm -rf $(OBJS_DIR)

fclean: clean
		rm -rf $(NAME)

re: fclean all

run:
		@ ./$(TARGET)

leaks:
	@ leaks --atExit -- ./$(TARGET)

.PHONY: all leaks re fclean clean run create_dirs