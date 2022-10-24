NAME = bureaucrat

SRCS =	Bureaucrat.cpp \
		Form.cpp \
		main.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \

TREES = *_shrubbery \

OBJS = $(SRCS:.cpp=.o)
OBJS_DIR = .obj

CPP	= c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

.PHONY:			all clean fclean re

$(OBJS_DIR)/%.o:		%.cpp
						mkdir -p $(OBJS_DIR)
						$(CPP) $(CPP_FLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(addprefix $(OBJS_DIR)/, $(OBJS))
				$(CPP) $(CPP_FLAGS) $(addprefix $(OBJS_DIR)/, $(OBJS)) -o $(NAME)

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)
				$(RM) $(TREES)

re:				fclean $(NAME)