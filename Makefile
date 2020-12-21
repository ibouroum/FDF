# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouroum <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/31 19:29:19 by ibouroum          #+#    #+#              #
#    Updated: 2019/01/31 19:29:30 by ibouroum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CFLAGS = -Wall -Wextra -Werror

HEAD = fdf.h

SRC = *.c

OBJ = *.o

FRAME = -framework OpenGL -framework AppKit


all:
	 make -C libft/
	 cc -I /usr/local/include libft/libft.a  *.c -L /usr/local/lib/ -lmlx $(FRAME)
	 mv a.out $(NAME)

clean:
	     make -C libft/ clean
		      /bin/rm -f $(OBJ)
fclean: clean
	        make -C libft/ fclean
			        /bin/rm $(NAME)

re: fclean all
