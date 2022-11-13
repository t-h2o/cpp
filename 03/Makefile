FOLDER	=	ex00
FOLDER	+=	ex01
FOLDER	+=	ex02
FOLDER	+=	ex03

all:
	@$(foreach var,$(FOLDER),make -C $(var);)

clean:
	@$(foreach var,$(FOLDER),make clean -C $(var);)

fclean:
	@$(foreach var,$(FOLDER),make fclean -C $(var);)

re:
	@$(foreach var,$(FOLDER),make re -C $(var);)
