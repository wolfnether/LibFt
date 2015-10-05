NAME= libft.a 
SRC= cbuf/ft_cbuscreate.c cbuf/ft_cbuswrite.c list/ft_lstcreate.c list/ft_lstpop.c list/ft_lstpopat.c list/ft_lstpopback.c list/ft_lstpush.c list/ft_lstpushback.c mem/ft_bzero.c mem/ft_memalloc.c mem/ft_memccpy.c mem/ft_memchr.c mem/ft_memcmp.c mem/ft_memcpy.c mem/ft_memdup.c mem/ft_memmove.c mem/ft_memset.c str/ft_atoi.c str/ft_atol.c str/ft_isalnum.c str/ft_isalpha.c str/ft_isascii.c str/ft_isblank.c str/ft_iscntrl.c str/ft_isdigit.c str/ft_isgraph.c str/ft_islower.c str/ft_isprint.c str/ft_ispunct.c str/ft_isspace.c str/ft_isupper.c str/ft_isxdigit.c str/ft_itoa.c str/ft_itoh.c str/ft_ltoa.c str/ft_ltoh.c str/ft_ptoh.c str/ft_strcat.c str/ft_strchr.c str/ft_strcmp.c str/ft_strcpy.c str/ft_strdup.c str/ft_strlcat.c str/ft_strlen.c str/ft_strncat.c str/ft_strncmp.c str/ft_strncpy.c str/ft_strnew.c str/ft_strnstr.c str/ft_strrchr.c str/ft_strstr.c str/ft_tolower.c str/ft_toupper.c str/get_hex.c stream/ft_putstr_fd.c   
OBJ=$(addsuffix .o, $(SRC)) 
H= includes/ftstruct.h includes/libft.h 
HPP=  
all:   $(NAME) 
$(NAME):$(OBJ) $(H) $(HPP) 
	 ar rcs $(NAME) $(OBJ) 
%.c.o:%.c $(H) 
	 gcc -O3 -Wall -Wextra -c $< -o $@ 
%.s.o:%.s 
	 nasm -f macho64 $< -o $@ 
%.cpp.o:%.cpp $(HPP) 
	 g++ -O3 -Wall -Wextra -c $< -o $@ 
re:fclean all 
fclean:clean 
	 rm -f $(NAME) 
clean: 
	 rm -f $(OBJ) 
