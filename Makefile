NAME = ImTheBest

OTHERS = ft_printf.c utils.c minitalk_utils.c

SERVER = server

CLIENT = client

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm 

all : $(SERVER) $(CLIENT)

$(NAME):

$(SERVER): $(OTHERS) server.c
		$(CC) $(FLAGS) server.c $(OTHERS) -o $(SERVER)

$(CLIENT): client.c $(OTHERS)
		$(CC) $(FLAGS) client.c $(OTHERS) -o $(CLIENT)

clean: 
		$(RM) $(SERVER) $(CLIENT)

fclean: 
		$(RM) -f $(SERVER) $(CLIENT)

re: 
		fclean all

.PHONY : clean fclean re all