NAME= libft.a 
SRC= cbuf/ft_cbuscreate.c cbuf/ft_cbuswrite.c list/ft_lstcreate.c list/ft_lstpop.c list/ft_lstpopat.c list/ft_lstpopback.c list/ft_lstpush.c list/ft_lstpushback.c mem/ft_bzero.c mem/ft_memalloc.c mem/ft_memccpy.c mem/ft_memchr.c mem/ft_memcmp.c mem/ft_memcpy.c mem/ft_memdel.c mem/ft_memdup.c mem/ft_memmove.c mem/ft_memset.c str/ft_atoi.c str/ft_atol.c str/ft_isalnum.c str/ft_isalpha.c str/ft_isascii.c str/ft_isblank.c str/ft_iscntrl.c str/ft_isdigit.c str/ft_isgraph.c str/ft_islower.c str/ft_isprint.c str/ft_ispunct.c str/ft_isspace.c str/ft_isupper.c str/ft_isxdigit.c str/ft_itoa.c str/ft_itoh.c str/ft_ltoa.c str/ft_ltoh.c str/ft_strcat.c str/ft_strchr.c str/ft_strclr.c str/ft_strcmp.c str/ft_strcpy.c str/ft_strdel.c str/ft_strdup.c str/ft_strequ.c str/ft_striter.c str/ft_striteri.c str/ft_strjoin.c str/ft_strlcat.c str/ft_strlen.c str/ft_strmap.c str/ft_strmapi.c str/ft_strncat.c str/ft_strncmp.c str/ft_strncpy.c str/ft_strnequ.c str/ft_strnew.c str/ft_strnstr.c str/ft_strrchr.c str/ft_strsplit.c str/ft_strstr.c str/ft_strsub.c str/ft_strtrim.c str/ft_tolower.c str/ft_toupper.c str/get_hex.c stream/ft_putchar.c stream/ft_putchar_fd.c stream/ft_putendl.c stream/ft_putendl_fd.c stream/ft_putnbr.c stream/ft_putnbr_fd.c stream/ft_putstr.c stream/ft_putstr_fd.c   
OBJ=$(addsuffix .o, $(SRC)) 
HPP=  
H= includes/cbuf.struct.h includes/ftstruct.h includes/item.struct.h includes/libft.h includes/list.struct.h 
CFLAGS=-Werror -Wextra -Wall -O3 -I./includes 
LDFLAGS=
all:   $(NAME) 
$(NAME):$(OBJ) $(H) $(HPP) 
	 ar rcs $(NAME) $(OBJ) 
%.c.o:%.c $(H) 
	 gcc $(CFLAGS) -c $< -o $@ 
%.s.o:%.s 
	 nasm -f macho64 $< -o $@ 
%.cpp.o:%.cpp $(HPP) 
	 g++ -O3 -Wall -Wextra -c $< -o $@ 
re:fclean all 
fclean:clean 
	 rm -f $(NAME) 
clean: 
	 rm -f $(OBJ) 
