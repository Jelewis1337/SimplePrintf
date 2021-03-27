COMPILER = 	gcc
LIB =		libpft.a
PFT =		pft
FLAGS =		-Wall -Wextra -Werror
OBJFLAG =	-c
LIBSRC =	ft_printf.c\
			ft_printf_parser.c\
			ft_printf_utils.c
LIBOBJ =	${LIBSRC:.c=.o}

%.o: %.c
	$(COMPILER) $(FLAGS) -I. $< -o $@

.PHONY: all clean fclean re

all: $(LIB) $(PFT)

$(LIB):
	$(COMPILER) $(FLAGS) $(OBJFLAG) $(LIBSRC)
	ar rc $(LIB) $(LIBOBJ)

$(PFT):
	$(COMPILER) $(FLAGS) main.c -L. -lpft -o $(PFT)

clean:
	rm -rf $(LIBOBJ)
	rm -rf $(LIB)

fclean: clean
	rm -rf $(PFT)

re: fclean all
