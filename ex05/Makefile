CC = c++
ifdef nocflag
CFAGS = 
else
CFAGS = -Wall -Wextra -Werror
endif
NAME = harl
BIN_DIR = .
OBJS_DIR = objs
SRCS_DIR = srcs
TARGET = $(BIN_DIR)/$(NAME)
FILES := $(shell ls $(SRCS_DIR))

OBJS = $(addprefix $(OBJS_DIR)/, $(FILES:.cpp=.o))

all: $(TARGET)

$(TARGET): create_dirs $(OBJS)
	@ $(CC) $(CFAGS) $(OBJS) -o $(TARGET)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	$(CC) -I./includes/ $(CFAGS) -c $< -o $@

create_dirs:
	@ mkdir -p $(OBJS_DIR)
	@ mkdir -p $(SRCS_DIR)
	@ mkdir -p $(BIN_DIR)
	
clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -rf $(TARGET)

re: fclean all

run:
	@ ./$(TARGET)

LEAKS := $(shell leaks --version 2>/dev/null)
ifdef LEAKS
LEAKS = leaks -atExit --
else
LEAKS := $(shell valgrind --version 2>/dev/null)
ifdef LEAKS
LEAKS = valgrind --leak-check=summary
else
LEAKS = $(error "No programm found to test for memory leaks, consider installing valgrind or leaks")
endif
endif

tt := 

leaks:
	@ $(LEAKS) ./$(TARGET)


compile_begin:
	@ echo "$(PURPLE)\t\tCompiling $(NAME) ...$(LIGHTPURPLE)"

compile_end:
	@ echo "$(GREEN)\t\t$(NAME) is READY$(RESET)"


.PHONY: all leaks compile re fclean clean run create_dirs