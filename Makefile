NAME= libft.a 
SRC= cbuf/ft_cbuscreate.c cbuf/ft_cbuswrite.c list/ft_lstcreate.c list/ft_lstpop.c list/ft_lstpopat.c list/ft_lstpopback.c list/ft_lstpush.c list/ft_lstpushback.c mem/ft_memchr.c mem/ft_memcmp.c mem/ft_memdel.c mem/ft_memdup.c mem/ft_memmove.c str/ft_atoi.c str/ft_atol.c str/ft_isblank.c str/ft_iscntrl.c str/ft_isdigit.c str/ft_isgraph.c str/ft_ispunct.c str/ft_isspace.c str/ft_isxdigit.c str/ft_itoa.c str/ft_itoh.c str/ft_ltoa.c str/ft_ltoh.c str/ft_strchr.c str/ft_strclr.c str/ft_strcmp.c str/ft_strdel.c str/ft_strequ.c str/ft_striter.c str/ft_striteri.c str/ft_strjoin.c str/ft_strlcat.c str/ft_strmap.c str/ft_strmapi.c str/ft_strncat.c str/ft_strncmp.c str/ft_strncpy.c str/ft_strnequ.c str/ft_strnstr.c str/ft_strrchr.c str/ft_strsplit.c str/ft_strstr.c str/ft_strsub.c str/ft_strtrim.c str/get_hex.c stream/ft_putchar.c stream/ft_putchar_fd.c stream/ft_putendl.c stream/ft_putendl_fd.c stream/ft_putnbr.c stream/ft_putnbr_fd.c stream/ft_putstr.c stream/ft_putstr_fd.c  mem/ft_bzero.s mem/ft_memalloc.s mem/ft_memccpy.s mem/ft_memcpy.s mem/ft_memset.s str/ft_isalnum.s str/ft_isalpha.s str/ft_isascii.s str/ft_isdigit.s str/ft_islower.s str/ft_isprint.s str/ft_isupper.s str/ft_strcat.s str/ft_strcpy.s str/ft_strdup.s str/ft_strlen.s str/ft_strnew.s str/ft_tolower.s str/ft_toupper.s syscall/ft_read.s syscall/ft_write.s 
OBJ=$(addsuffix .o, $(SRC)) 
H= includes/cbuf.struct.h includes/ftstruct.h includes/item.struct.h includes/libft.h includes/list.struct.h 
HPP=  
CFLAGS=-Werror -Wextra -Wall -O3 -I./includes 
LDFLAGS=
all:   $(NAME) 
$(NAME):$(OBJ) $(H) $(HPP) 
	 ar rcs $(NAME) $(OBJ) 
%.c.o:%.c $(H) 
	 gcc $(CFLAGS) -c $< -o $@ 
%.s.o:%.s 
	 nasm -Ox -f macho64 $< -o $@ 
%.cpp.o:%.cpp $(HPP) 
	 g++ -O3 -Wall -Wextra -c $< -o $@ 
re:fclean all 
fclean:clean 
	 rm -f $(NAME) 
clean: 
	 rm -f $(OBJ) 
