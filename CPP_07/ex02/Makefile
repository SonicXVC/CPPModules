NAME = array

SRCS =	main.cpp \

INC	= 	Array.hpp \

OBJS = $(SRCS:.cpp=.o)
OBJS_DIR = .obj

CPP	= c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

.PHONY:			all clean fclean re

$(OBJS_DIR)/%.o:		%.cpp $(INC)
						@mkdir -p $(OBJS_DIR)
						$(CPP) $(CPP_FLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(addprefix $(OBJS_DIR)/, $(OBJS))
				$(CPP) $(CPP_FLAGS) $(addprefix $(OBJS_DIR)/, $(OBJS)) -o $(NAME)

clean:
				@$(RM) $(OBJS_DIR)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)