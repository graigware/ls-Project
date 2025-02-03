##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile lib
##

SRC		=	my_strdup.c \
			my_strcmp.c \
			my_strncmp.c \
			my_putstr.c \
			my_putchar.c \
			my_strlen.c \
			my_put_nbr.c \
			my_strcpy.c \
			my_printf.c \
			my_isalnum.c \
			handle_char.c \
			handle_str.c \
			handle_int.c \
			percent.c \
			handle_hex.c \
			handle_hexmaj.c \
			handle_oct.c \
			handle_ptr.c \
			handle_flottants.c \
			handle_e.c \
			my_put_unsigned_nbr.c \
			handle_unsigned.c \
			my_revstr.c \
			my_strncpy.c \
			my_isneg.c \
			my_print_comb2.c \
			my_print_params.c \
			my_putfloat.c \
			my_swap.c \
			my_sort_int_array.c \
			my_strcat.c \
			my_strncat.c

OBJ		=	$(SRC:.c=.o)

LIB	=	libmy.a

INCLUDE =   ../include

CFLAGS  =   -I$(INCLUDE)

all:	$(LIB)

$(LIB):	$(OBJ)
		ar rc $(LIB) $(OBJ)

%.o: %.c
		gcc $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(LIB)

re: fclean all
