NAME	=	phonebook

SRCS	=	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

OBJS	=	${SRCS:.cpp=.o}
	
INCLUDE	=	./

CPPC	=	c++

CPPFLAG	=	-Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address

RM		=	rm -f

.cpp.o:
	${CPPC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
	${CPPC} ${CPPFLAG} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re

