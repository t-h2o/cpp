FOLDER	=	ex00

all:
	@$(foreach var,$(FOLDER),make -C $(var);)

clean:
	@$(foreach var,$(FOLDER),make clean -C $(var);)

fclean:
	@$(foreach var,$(FOLDER),make fclean -C $(var);)

re:
	@$(foreach var,$(FOLDER),make re -C $(var);)

index.html:
	asciidoctor README.adoc -o site/index.html
