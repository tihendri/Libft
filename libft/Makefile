# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tihendri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 14:09:03 by tihendri          #+#    #+#              #
#    Updated: 2019/06/05 14:19:02 by tihendri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = src/*.c

all:
	gcc -c -Wall -Werror -Wextra $(FILES)
	ar -rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all

